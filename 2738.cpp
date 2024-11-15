#include <iostream>
#include <vector>

using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    vector<vector<int>> vector1(row, vector<int>(col));

    for (int k=0; k<2; k++ ){
        for (int i =0; i< row; i++){
            for (int j =0; j <col; j++) {
                int input;
                cin >> input;
                vector1[i][j] += input;
            }
        }
    }

    for (auto& element: vector1){
        for (auto& elem : element) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}