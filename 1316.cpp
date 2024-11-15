#include <iostream> 
#include <unordered_set>
#include <string>

using namespace std;

int main(){
    int inputNumber;
    cin >> inputNumber;
    int count =0;

    for (int i = 0; i < inputNumber; i++){
        string input;
        cin >> input;
        unordered_set<char> inputSet;
        bool flag = false; 

        for (int j = 0; j < input.size() ; j++) {
            if (!flag) {
                if (j==0) {
                    inputSet.insert(input[j]);
                } else {
                    if (input[j] == input[j-1]) {
                        continue;
                    } else {
                        if (inputSet.find(input[j]) != inputSet.end()) {
                            flag = true;
                        } else {
                            inputSet.insert(input[j]);
                        }
                    }
                }
            }
        }
        if (!flag) {
            count += 1;
        }
    }

    cout << count << endl;
    return 0;
}