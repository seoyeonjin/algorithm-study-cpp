#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int resultCount;

void dfs(int node, int* visited, vector<vector<int>>& edgeList) {
    visited[node] = resultCount++;

     for (int i = 0; i < edgeList[node].size(); i++){
        int currentNode = edgeList[node][i];
        if (visited[currentNode] == 0){
            dfs(currentNode, visited, edgeList);
        }
    }
}

int main () {
    int node, edge, startNode; 
    scanf("%d %d %d", &node, &edge, &startNode); 

    vector<vector<int>> edgeList(node+1);
    vector<int> visited(node+1, 0);
    resultCount = 1;


    for (int i = 0; i < edge; i++){
        int start, end; 

        scanf("%d %d", &start, &end);
        edgeList[start].push_back(end);
        edgeList[end].push_back(start);

    }

    for (int i = 0; i <= node; i++) {
        sort(edgeList[i].rbegin(), edgeList[i].rend());
    }

    dfs(startNode, &visited[0], edgeList);

    for (int i = 1; i < node+1; i++){
        cout << visited[i] << '\n';
    }
    return 0;
}