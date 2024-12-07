#include <iostream>

using namespace std;

int main() {

    int first,second;

    while (true) {
        cin >> first >> second; 
        if (first == 0 && second == 0 ){
            return 0;
        }

        if (first > second) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
    return 0;
}