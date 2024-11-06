#include <iostream>

using namespace std;

int main() {

    unsigned int number;
    cin >> number; 

    unsigned int div = number / 4; 

    for (int i = 0; i < div; i++)  {
        cout << "long ";
    }

    cout << "int" << endl;
    return 0;
}