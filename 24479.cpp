#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>


using namespace std;

unsigned int node, edge, startNode, resultCount; 
map<unsigned int, unsigned int> result;

void dfs(unsigned int visitNode, unsigned int* visited, unsigned int node, vector<vector<unsigned int>>& edgeList) {
    visited[visitNode] = resultCount++;

    for (auto& elem : edgeList[visitNode]) {
        if (visited[elem] == 0) {
            dfs(elem, visited, node, edgeList);
        }
    }
}

int main (){
 
    scanf("%d %d %d", &node, &edge, &startNode);
    vector<vector<unsigned int>> edgeList(node+1);
    vector<unsigned int> visited(node+1,0);
    resultCount = 1;


    for (int i = 0 ; i < edge; i++){
        unsigned int start, destination;
        scanf("%d %d", &start, &destination);
        edgeList[start].push_back(destination);
        edgeList[destination].push_back(start);
    }

    for (int i = 1; i <= node; i++){
        sort(edgeList[i].begin(), edgeList[i].end());
    }

    dfs(startNode, &visited[0], node ,edgeList);

    for (int i = 1; i <= node; i++){
        cout << visited[i] << '\n';
    }
    
    return 0;
}