#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int totalNumber, friendNumber;

    cin >> totalNumber >> friendNumber;
    vector<int> personList;
    vector<int> friendList;
    vector<int> totalList(totalNumber, 1);
    int friendIndex = 0;
    int count = 0;

    for (int i = 0; i < totalNumber; i++){
        int person;
        cin >> person;
        personList.push_back(person);
    }

    for (int i = 0; i< friendNumber; i++){
        int person; 
        cin >> person;
        friendList.push_back(person);
    }

    for (int i = 0; i < totalNumber; i++){
        int person = personList[i];
        auto it = find(friendList.begin(), friendList.end(), person);
        if (it == friendList.end()) {
            continue;
        } else {
            if (i < friendNumber) {
                totalList[i] = 0;
                continue;
            } else {
                for (int j = 0; j < totalNumber; j++ ) {
                    if (totalList[j] == 1) {
                        int temp = personList[j];
                        personList[j] = personList[i];
                        personList[i] = temp;
                        totalList[j] = 0;
                        count += 1;
                        break;
                    }
                }
            }
        }
    }
    cout << count << '\n';

    return 0;
}