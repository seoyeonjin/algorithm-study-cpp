#include <iostream>
#include <deque> 
#include <vector>

using namespace std;

int main() {
    int studentCount; 
    scanf("%d", &studentCount);
    deque<int> currentLine;
    vector<int> waitingLine;
    int count = 0;

    for (int i = 0; i < studentCount; i++){
        int number;
        scanf("%d", &number);
        currentLine.push_back(number);
    }

    while (true){
        if (currentLine.size() != 0 ){
            int currentStudent = currentLine[0];
            if (currentStudent == count+1){
                currentLine.pop_front();
                count++;
                continue;
            } else {
                if (waitingLine.size() != 0 ){
                    int currentStudent = waitingLine[waitingLine.size() -1];
                    if (currentStudent == count+1){
                        waitingLine.pop_back();
                        count++;
                        continue;
                    } else {
                        waitingLine.push_back(currentLine[0]);
                        currentLine.pop_front();
                    }
                } else {
                    waitingLine.push_back(currentLine[0]);
                    currentLine.pop_front();
                }
            }
        } else {
            if (waitingLine.size() == 0){
                cout << "Nice" << '\n';
                break;
            }  else {
                if (waitingLine[waitingLine.size()-1] == count +1){
                    waitingLine.pop_back();
                    count++;
                } else {
                    cout << "Sad" << '\n';
                    break;
                }
            }
        }

    }

    return 0;
}