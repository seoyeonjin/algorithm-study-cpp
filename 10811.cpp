#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int bowlNumber, changeNumber;
    cin >> bowlNumber >> changeNumber; 

    vector<int> bowlList (bowlNumber);

    for (int i = 0; i < bowlNumber; i++) {
        bowlList[i] = i+1;
    }

    for (int i = 0; i <changeNumber ;i++) {
        int start, end;
        cin >> start >> end;
        reverse(start - 1 + bowlList.begin(), bowlList.end() - (bowlNumber - end));
    }

    for (auto& elem : bowlList) {
        cout << elem << " ";
    }
    cout << '\n';

    return 0;
}