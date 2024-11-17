#include <iostream>
#include <vector> 

using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    unsigned int commandCount;
    cin >> commandCount; 
    vector<unsigned int> stack; 

    for (int i = 0; i < commandCount; i++){
        unsigned int command; 
        cin >> command; 

        if (command == 1){
            unsigned int number;
            cin >> number;
            stack.push_back(number);
        } else if (command == 2) {
            if (stack.size() != 0){
                unsigned int poppedNumber = stack[stack.size() -1];
                cout << poppedNumber << '\n';
                stack.pop_back();
            } else {
                cout << -1 << '\n';
            }
        } else if (command == 3) {
            cout << stack.size() << '\n';
        } else if (command == 4) {
            if (stack.size() != 0){
                cout << 0 << '\n';
            } else {
                cout << 1 << '\n';
            }
        } else if (command ==5){
            if (stack.size() != 0){
                unsigned int poppedNumber = stack[stack.size() -1];
                cout << poppedNumber << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}