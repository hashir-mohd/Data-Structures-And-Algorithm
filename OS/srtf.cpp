#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Process {
    int id;         
    int arrival;    
    int burst;      
    int remaining;  
    int completion; 
    int waiting;    
    int turnaround; 
};

int findShortestProcess(vector<Process> &processes, int currentTime){
    int shortestIdx = -1;
    int minRemainingTime = INT_MAX;
    for(int i = 0; i < processes.size(); i++){
    if(processes[i].arrival<=currentTime && processes[i].remaining>0 && processes[i].remaining<minRemainingTime){
        if(processes[i].remaining<minRemainingTime){
            minRemainingTime=processes[i].remaining;
            shortestIdx=i;
        }
    }        
    }
    return shortestIdx;
}

void srtfScheduling(vector<Process> &processes){
    int currentTime =0 ;
    int n = processes.size();
    int completed= 0;
    while(completed<n){
        int idx= findShortestProcess(processes,currentTime);
        if(idx == -1){
            currentTime++;
            continue;
        }
        processes[idx].remaining--;
        currentTime++;
        if(processes[idx].remaining==0){
            completed++;
            processes[idx].completion=currentTime;
            processes[idx].turnaround=processes[idx].completion-processes[idx].arrival;
            processes[idx].waiting=processes[idx].turnaround-processes[idx].burst;
        }

    }
}    

void printResults(vector<Process>& processes) {
    cout << "ID\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\n";
    for (auto& p : processes) {
        cout << p.id << "\t" << p.arrival << "\t" << p.burst << "\t" << p.completion
             << "\t\t" << p.turnaround << "\t\t" << p.waiting << "\n";
    }
}

int main(){
    int n;
    cout <<"enter the number of processes: "<<endl;
    cin >> n;
    vector<Process> processes(n);
    for(int i =0 ;i < n ;i++){
        processes[i].id = i+1;
        cout << "Enter arrival time and burst time for process " << i + 1 << ": ";
        cin >> processes[i].arrival >> processes[i].burst;
        processes[i].remaining = processes[i].burst;
    }

    srtfScheduling(processes);
    printResults(processes);
}