#include <iostream>
#include <vector>

using namespace std;

void input(vector<vector<int>>& data, int& number_of_processes);
void calculate_time(const vector<vector<int>>& data, const int& number_of_processes);

int main() {
    cout << "Assume all processes arrive at the same time." << endl;
    vector<vector<int>> data;
    int number_of_processes = 0;
    input(data, number_of_processes);
    calculate_time(data, number_of_processes);
    return 0;
}

void input(vector<vector<int>>& data, int& number_of_processes) {
    vector<int> process_time;
    cout << "Enter the number of processes: ";
    cin >> number_of_processes;
    cout << "Enter the busrt time of each process: ";
    for (int i = 0; i < number_of_processes; i++) {
        int temp;
        cin >> temp;
        process_time.push_back(temp);
    }
    data.push_back(process_time);
}

void calculate_time(const vector<vector<int>>& data, const int& number_of_processes) {
    int temp = 0;
    int average = 0;
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data[i].size(); j++) {
            cout << "P" << j+1 << " waiting time: " << temp << endl;
            average += temp;
            temp += data[i][j];
        }
    }
    cout << "The average wating time: " << (float)average / number_of_processes << endl;
}