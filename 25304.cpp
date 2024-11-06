#include <iostream>

using namespace std;

int main() {
    unsigned int totalPrice, sum = 0;
    unsigned int totalCount;
    cin >> totalPrice;
    cin >> totalCount;

    for (int i = 0; i < totalCount; i++){
        unsigned int price, count;
        cin >> price >> count;
        sum += price * count;
    }

    if (totalPrice == sum){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}