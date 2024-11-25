#include <iostream>
#include <string>

using namespace std;

int main() {

    string inputString;
    int totalSum = 0;
    int currentOpLocation = 0;
    int preOpLocation = -1;
    char currentOp = '+';

    cin >> inputString;

    for (int i = 0 ; i < inputString.size(); i++) {
        if (inputString[i] == '-'){
            int currentNumber = stoi(inputString.substr(preOpLocation+1, i - (preOpLocation+1))); 
            preOpLocation = i;
            if (currentOp == '+'){
                totalSum += currentNumber;
            } else {
                totalSum -= currentNumber;
            }
            currentOp = '-';
        } else if (inputString[i] == '+'){
            int currentNumber = stoi(inputString.substr(preOpLocation+1, i - (preOpLocation+1))); 
            preOpLocation = i;
            if (currentOp == '+'){
                totalSum += currentNumber;
            } else {
                totalSum -= currentNumber;
            }
        }

        if (i == inputString.size() -1){
            int currentNumber = stoi(inputString.substr(preOpLocation+1, i - (preOpLocation))); 
            preOpLocation = i;
            if (currentOp == '+'){
                totalSum += currentNumber;
            } else {
                totalSum -= currentNumber;
            }
        }
        
    }
    cout << totalSum << '\n';
    
    return 0;
}