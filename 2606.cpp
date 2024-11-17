#include <iostream>
#include <vector>

using namespace std;

int computerNumber, lineNumber;


void dfs(int node, int* visited, vector<vector<int>> lineList) {
    if (visited[node] == 0) {
        visited[node] = 1;
        for (int i = 1; i <= computerNumber; i++){
            if (lineList[node][i] != 0) {
                dfs(i, visited, lineList);
            }
        }
    }
}

int main() {

    scanf("%d", &computerNumber);
    scanf("%d", &lineNumber);
    vector<vector<int>> lineList(computerNumber+1, vector<int> (computerNumber+1,0));
    vector<int> visited(computerNumber+1);
    int totalCount = 0;


    for (int i =0; i< lineNumber; i++){ 
        int start, destination; 
        scanf("%d %d", &start, &destination);
        lineList[start][destination] = 1;
        lineList[destination][start] = 1;
    }

    dfs(1, &visited[0],lineList);

    for (auto& elem : visited) {
       if (elem == 1){
        totalCount += 1;
       }
    }

    printf("%d\n", totalCount-1);

    return 0;
}