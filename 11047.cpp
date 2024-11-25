#include <iostream>
#include <vector>

using namespace std;

int main() {

    int coinNumber, totalPrice;
    int totalCount = 0 ;
    vector<int> coinList;

    scanf("%d %d", &coinNumber, &totalPrice);

    for (int i = 0; i < coinNumber; i++){
        int coin;
        scanf("%d", &coin);
        coinList.push_back(coin);
    }

    for (int i = coinNumber-1; i >= 0; i--){
        if (totalPrice >=  coinList[i]){
            int currentCount = totalPrice / coinList[i];
            totalPrice = totalPrice % coinList[i];
            totalCount += currentCount;
        }
    }

    cout << totalCount << '\n';
    return 0;  
}