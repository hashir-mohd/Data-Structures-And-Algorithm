#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Process {
    int id;
    int arrival_time;
    int burst_time;
    int waiting_time;
    int turnaround_time;
};

void calculateLJF(vector<Process>& processes) {
    int n = processes.size();
    vector<bool> done(n,false);
    int count = 0;
    int current_time = 0;

    while (count < n) {
        
        int index = -1;
        int largest_burst = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (!done[i] && processes[i].arrival_time <= current_time && processes[i].burst_time > largest_burst) {
                largest_burst = processes[i].burst_time;
                index = i;
            }
        }
        if(index != -1) {
            cout << "Process "<<processes[index].id<<" is executed\n";
        }
        if (index == -1) {
            current_time++;
        } else {
            processes[index].waiting_time = current_time - processes[index].arrival_time;
            processes[index].turnaround_time = processes[index].waiting_time + processes[index].burst_time;

            current_time += processes[index].burst_time;
            done[index] = true;
            count++;
        }
        
    }
    float avg_waiting_time=0,waiting_time_sum=0;
    for(int i=0;i<n;i++) {
        waiting_time_sum+=processes[i].waiting_time;
    }
    avg_waiting_time=waiting_time_sum/n;
    cout<<"Average waiting time is :"<<avg_waiting_time;
}

void displayProcesses(const vector<Process>& processes) {
    cout << "\nID\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < processes.size(); i++) {
        cout << processes[i].id << "\t" << processes[i].arrival_time << "\t\t" << processes[i].burst_time << "\t\t" 
             << processes[i].waiting_time << "\t\t" << processes[i].turnaround_time << "\n";
    }
}

int main() {
    int n;
    cout << "Enter number of processes ";
    cin >> n;
    vector<Process>processes(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter arrival time and burst time for process"<<i+1<<":";
        processes[i].id=i+1;
        cin>>processes[i].arrival_time>>processes[i].burst_time;
    }
    calculateLJF(processes);
    displayProcesses(processes);

    return 0;
}
