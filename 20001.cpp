#include <iostream>
#include <string>

using namespace std;

int main() {
    int question = 0;

    while (true) {
        string input;
        getline(cin, input);

        if (input == "고무오리 디버깅 시작"){
            continue;
        }
        else if (input == "문제") {
            question += 1;
        }
        else if (input == "고무오리"){
            question -= 1;
            if (question < 0 ) {
                question += 3;
            }
        }
        else if (input == "고무오리 디버깅 끝") {
            break;
        }
    }

    if (question == 0) {
        cout << "고무오리야 사랑해" << '\n';
    } else {
        cout << "힝구" << '\n';
    }

    return 0;
}