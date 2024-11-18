#include <iostream>
#include <deque>
#include <vector>

using namespace std;


int main() {
    int testCaseNumber; 
    scanf("%d", &testCaseNumber);
    vector<int> dx = {1,-1,0,0};
    vector<int> dy = {0,0,1,-1};

    for (int i = 0; i < testCaseNumber; i++){
        int row, col, chuCount;
        int jirungCount = 0;
        deque<pair<int, int>> chuQue;
        scanf("%d %d %d", &row, &col, &chuCount);
        vector<vector<int>> chuList (row, vector<int> (col,0));

        for (int j =0; j < chuCount; j++){
            int x, y;
            scanf("%d %d", &x, &y);
            chuList[x][y] = 1; 
            
        }

        for (int k = 0; k < row; k++){
            for (int l = 0; l < col; l++){
                if (chuList[k][l] == 1){
                    jirungCount++;
                    chuQue.push_back({k,l});
                    
                    while(chuQue.size() != 0){
                        int poppedX = chuQue[0].first;
                        int poppedY = chuQue[0].second;
                        chuQue.pop_front();
                        for (int n = 0; n <4; n++){
                            int newX = poppedX+dx[n];
                            int newY = poppedY+dy[n];
                            if (newX >= 0 && newX < row && newY >=0 && newY < col){
                                if (chuList[newX][newY]){
                                    chuList[newX][newY] = 0;
                                    chuQue.push_back({newX, newY});
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << jirungCount << '\n';

    }
    return 0;
}