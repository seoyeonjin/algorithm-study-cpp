// 체스판 다시 칠하기

#include <iostream>
#include <vector> 

using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    vector<vector<char>> boardList(row, vector<char> (col));
    int min = row * col;

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            char color;
            cin >> color;
            boardList[i][j] = color;
        }
    }

    for (int i=0; i <= row-8; i++){
        for (int j=0; j <=col-8; j++){
            int tempMin = 0;
            char startColor = boardList[i][j];
            char trueColor = 'W';

            for (int k=i; k<i+8; k++){
                for (int l=j;l<j+8;l++){
                    if (trueColor != boardList[k][l]){
                        tempMin += 1;
                    }
                    if (trueColor == 'W') {
                        trueColor = 'B';
                    } else {
                        trueColor = 'W';
                    }
                }
                if (trueColor == 'W') {
                        trueColor = 'B';
                } else {
                        trueColor = 'W';
                }
            }
            if (tempMin < min){
                min = tempMin;
            }

            trueColor = 'B';
            tempMin = 0;

            for (int k=i; k<i+8; k++){
                for (int l=j;l<j+8;l++){
                    if (trueColor != boardList[k][l]){
                        tempMin += 1;
                    }
                    if (trueColor == 'W') {
                        trueColor = 'B';
                    } else {
                        trueColor = 'W';
                    }
                }
                if (trueColor == 'W') {
                        trueColor = 'B';
                } else {
                        trueColor = 'W';
                }
            }
            if (tempMin < min){
                min = tempMin;
            }
        }
    }

    cout << min << endl;

    return 0;
}