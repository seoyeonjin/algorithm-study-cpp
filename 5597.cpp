#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> student(31, 0);

    for (int i = 0; i < 28; i++){
        int number;
        cin >> number;
        student[number] = 1;
    }

    for (int i =1; i<= 30;i++) {
        if (student[i] != 1) {
            cout << i << '\n';
        }
    }

    return 0;
}