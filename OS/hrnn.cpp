//  hrrn = (wt+bt)/bt
// wt=ct-at-bt
// tat = ct-at


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int waitingTime;
    int turnaroundTime;
    bool completed;
};

float calculateResponseRatio(int waitingTime, int burstTime) {
    return (1.0 + (float)waitingTime / burstTime);
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    for (int i = 0; i < n; ++i) {
        processes[i].id = i + 1;
        cout << "Enter arrival time and burst time for process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].completed = false;
    }

    int currentTime = 0;
    int completedProcesses = 0;

    while (completedProcesses < n) {
        int selectedProcess = -1;
        float highestResponseRatio = -1.0;

        for (int i = 0; i < n; ++i) {
            if (!processes[i].completed && processes[i].arrivalTime <= currentTime) {
                int waitingTime = currentTime - processes[i].arrivalTime;
                float responseRatio = calculateResponseRatio(waitingTime, processes[i].burstTime);

                if (responseRatio > highestResponseRatio) {
                    highestResponseRatio = responseRatio;
                    selectedProcess = i;
                }
            }
        }

        if (selectedProcess == -1) {
            currentTime++;
            continue;
        }

        currentTime += processes[selectedProcess].burstTime;
        processes[selectedProcess].completionTime = currentTime;
        processes[selectedProcess].turnaroundTime = processes[selectedProcess].completionTime - processes[selectedProcess].arrivalTime;
        processes[selectedProcess].waitingTime = processes[selectedProcess].turnaroundTime - processes[selectedProcess].burstTime;
        processes[selectedProcess].completed = true;
        completedProcesses++;
    }

    float totalWaitingTime = 0, totalTurnaroundTime = 0;
    cout << "\nProcess\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n";
    for (const auto &p : processes) {
        totalWaitingTime += p.waitingTime;
        totalTurnaroundTime += p.turnaroundTime;
        cout << "P" << p.id << "\t\t" << p.arrivalTime << "\t\t" << p.burstTime << "\t\t" 
             << p.completionTime << "\t\t" << p.waitingTime << "\t\t" << p.turnaroundTime << endl;
    }

    cout << "\nAverage Waiting Time: " << totalWaitingTime / n << endl;
    cout << "Average Turnaround Time: " << totalTurnaroundTime / n << endl;

    return 0;
}
