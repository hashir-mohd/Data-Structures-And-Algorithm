#include <iostream>
#include <vector>
using namespace std;

struct Process {
    int pid;
    int burstTime;
    int arrivalTime;
    int priority;
    int waitingTime;
    int turnaroundTime;
    int completionTime;
};

void calculateTimes(vector<Process> &processes) {
    int currentTime = 0;
    int completedProcesses = 0;
    int n = processes.size();
    
    vector<bool> isCompleted(n, false);
    
    while (completedProcesses < n) {
        int idx = -1;
        int highestPriority = 10000;
        
        for (int i = 0; i < n; i++) {
            if (processes[i].arrivalTime <= currentTime && !isCompleted[i] && processes[i].priority < highestPriority) {
                highestPriority = processes[i].priority;
                idx = i;
            }
        }
        
        if (idx != -1) {
            processes[idx].waitingTime = currentTime - processes[idx].arrivalTime;
            processes[idx].completionTime = currentTime + processes[idx].burstTime;
            processes[idx].turnaroundTime = processes[idx].completionTime - processes[idx].arrivalTime;
            currentTime += processes[idx].burstTime;
            isCompleted[idx] = true;
            completedProcesses++;
        } else {
            currentTime++;
        }
    }
}

void displayProcesses(const vector<Process> &processes) {
    cout << "PID\tArrival\tPriority\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (const auto &p : processes) {
        cout << p.pid << "\t" << p.arrivalTime << "\t" << p.priority << "\t\t"
             << p.burstTime << "\t\t" << p.waitingTime << "\t\t" 
             << p.turnaroundTime << "\n";
    }
}

void calculateAverageTimes(const vector<Process> &processes) {
    int totalWaitingTime = 0, totalTurnaroundTime = 0;
    for (const auto &p : processes) {
        totalWaitingTime += p.waitingTime;
        totalTurnaroundTime += p.turnaroundTime;
    }

    cout << "\nAverage Waiting Time: " << (float)totalWaitingTime / processes.size() << endl;
    cout << "Average Turnaround Time: " << (float)totalTurnaroundTime / processes.size() << endl;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);
    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;
        cout << "Enter burst time, arrival time, and priority for process " << i + 1 << ": ";
        cin >> processes[i].burstTime >> processes[i].arrivalTime >> processes[i].priority;
    }

    calculateTimes(processes);

    displayProcesses(processes);

    calculateAverageTimes(processes);

    return 0;
}
