#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    unordered_set<string> inputSet;

    for (int i=1; i<= input.size(); i++){
        for (int j=0; j<input.size()-i+1; j++){
            inputSet.insert(input.substr(j,i));
        }
    }

    cout << inputSet.size() << '\n';

    return 0;
}