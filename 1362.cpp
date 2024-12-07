#include <iostream>

using namespace std;

int main() {
    int count = 1;
    while (true) {
        bool die = false;   
        int targetWeight, currentWeight;
        cin >> targetWeight >> currentWeight;

        if (targetWeight == 0 && currentWeight == 0) {
            return 0;
        }

        while (true) {
            char command;
            int forceNumber; 
            cin >> command >> forceNumber;

            if (command == 'F') {
                currentWeight += forceNumber;
            } else if (command == 'E') {
                currentWeight -= forceNumber;
                if (currentWeight <= 0) {
                    die = true;
                }
            } else if (command == '#') {
                if (die) {
                    cout << count << " RIP" << '\n';
                }
                else if (currentWeight > targetWeight / 2 && currentWeight < targetWeight *2) {
                    cout << count << " :-)" << '\n'; 
                } 
                else {
                    cout << count << " :-(" << '\n';
                }
                count += 1;
                break;
            }
        }
    }
    return 0;
}