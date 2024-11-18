#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    unsigned int nodeNumber, edgeNumber, startNode;
    scanf("%u %u %u", &nodeNumber, &edgeNumber, &startNode );
    unsigned int count = 1;

    vector<vector<unsigned int>> edgeList (nodeNumber+1);

    for (int i = 0; i < edgeNumber; i++){
        unsigned int start, end;
        scanf("%u %u", &start, &end);
        edgeList[start].push_back(end);
        edgeList[end].push_back(start);
    }

    for (int i = 1; i <= nodeNumber; i++){
        sort(edgeList[i].begin(), edgeList[i].end());
    }

    vector<unsigned int> visited(nodeNumber+1, 0);

    deque<unsigned int> que;
    que.push_back(startNode);
    visited[startNode] = count++;

    while (que.size() != 0){
        unsigned int poppedNumber = que[0];
        que.pop_front();

        for (auto& elem : edgeList[poppedNumber]){
            if (!visited[elem]){
                visited[elem] = count++;
                que.push_back(elem);
            }
        }
    }

    for (int i = 1;  i<= nodeNumber; i++){
        cout << visited[i] << '\n';
    }
    return 0;
}