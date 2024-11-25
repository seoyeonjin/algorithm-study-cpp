#include <iostream>
#include <vector>

using namespace std;

int main() {

    long cityNumber;
    vector<long> roadInfoList;
    vector<long> priceList;

    cin >> cityNumber; 

    for (long i = 0; i <cityNumber-1; i++) {
        long roadNumber;
        cin >> roadNumber;

        roadInfoList.push_back(roadNumber);
    }

    for (long i = 0; i< cityNumber; i++){
        long price;
        cin >> price;
        priceList.push_back(price);
    }


    long currentCity = 0;
    long totalPrice = 0;
    long currentPrice = priceList[0];

    while (currentCity != cityNumber -1) {
        long nextPrice = priceList[currentCity+1];

        if (currentPrice > nextPrice) {
            totalPrice += (currentPrice * roadInfoList[currentCity]);
            currentPrice = priceList[currentCity+1];
            currentCity += 1;
        } else {
            totalPrice += (currentPrice * roadInfoList[currentCity]);
            currentCity += 1;
        }
    }

    cout << totalPrice << '\n';
    return 0;
}