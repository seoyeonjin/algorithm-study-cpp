#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;


void cantor(char* inputString, unsigned long start, unsigned long end) {
    if (start + 1 != end){
        unsigned long newStart = start + (end - start) / 3;
        unsigned long newEnd = start + (end - start) / 3 * 2;
        for (int i = newStart; i < newEnd; i++){
            inputString[i] = ' ';
        }
        cantor(inputString, start, newStart);
        cantor(inputString, newEnd, end);
    } 
    
}

int main() {
    int inputNumber;
    

    while(true){
        cin >> inputNumber;
        vector<char> inputString;
        if(cin.eof() == true) {
           break;
       }
        for (int i=0; i < pow(3, inputNumber); i++){
            inputString.push_back('-');
        }
        cantor(&inputString[0], 0, pow(3, inputNumber));
        
        for (int i =0; i < pow(3, inputNumber); i++){
            cout << inputString[i]; 
        }

        inputString.clear();

        cout << '\n' << flush;
    }


    return 0;
}