#include <bits/stdc++.h>

using namespace std;

class Process {
public:
    int id; // process id
    int burst_time;
    int priority;
    int arrival_time;
    Process(int id, int burst_time, int priority, int arrival_time) {
        this->id = id;
        this->burst_time = burst_time;
        this->priority = priority;
        this->arrival_time = arrival_time;
    }
    ~Process() {};
};

int main() {
    int number_of_process = 5;
    Process processes[] = {
            {1, 10, 3, 0},
            {2, 1 , 1, 0},
            {3, 2 , 4, 0},
            {4, 1 , 5, 0},
            {5, 5 , 2, 0}
        };
    
    return 0;
}

void wating_time(const Process processes[], const int& n, int wating_time[]) {
    int completed_process = 0;
    int t = 0;
    vector<Process> current_processes;
    while (completed_process < n) {
        
    }
}