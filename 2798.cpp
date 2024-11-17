// 블랙잭 
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 가까운 3장의 합을 찾으려면 어떻게 해야할까? -> 모든 조합의 덧셈을 계산하고, 가장 차가 적은 3장의 합을 출력한다.
    int cardNumber, targetNumber;
    cin >> cardNumber >> targetNumber;
    vector<int> cardList(cardNumber);
    int maxNumber = 0;

    for (int i=0; i < cardNumber; i++){
        int number;
        cin >> number;
        cardList[i] = number;
    }

    for (int i =0; i<cardNumber-2;i++){
        for (int j =i+1; j<cardNumber-1; j++){
            for (int k=j+1; k<cardNumber; k++){
                int sum = cardList[i] + cardList[j] + cardList[k];
                if (sum <= targetNumber && maxNumber < sum){
                    maxNumber = sum;
                }
            }
        }
    }

    cout << maxNumber << '\n';
    return 0;
}