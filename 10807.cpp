#include <iostream> 
#include <vector>

using namespace std;

int main() {
    int count; 
    vector<int> numberVector(201);
    cin >> count; 
    
    for (int i = 0; i < count ; i++){
        int number;
        cin >> number;
        numberVector.at(number+100) += 1;
    }

    int searchKeyword;
    cin >> searchKeyword;

    cout << numberVector.at(searchKeyword+100) << endl;
    return 0;
}