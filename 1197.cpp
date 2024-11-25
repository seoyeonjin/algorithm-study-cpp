#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_parent(int x, int* parent){
    if (parent[x] == x) return x;
    else {
        return parent[x] = find_parent(parent[x], parent);
    }
}

int main() {
    int node, edge;
    scanf("%d %d", &node, &edge);
    int minTree = 0;
    vector<pair<int, pair<int, int>>> edgeList;
    vector<int> parent(node+1);


    for (int i = 0; i < edge; i++){
        int start, end, value;

        scanf("%d %d %d", &start, &end, &value);
        edgeList.push_back({value, {start, end}});
    }

    sort(edgeList.begin(), edgeList.end());

    for (int i = 1; i < node+1; i++){
        parent[i] = i; 
    }

    for (int i = 0; i < edgeList.size(); i++){
        int currentValue = edgeList[i].first;
        pair<int,int> locations = edgeList[i].second;
        int currentStart = locations.first;
        int currentEnd = locations.second;

        int parentStart = find_parent(currentStart, &parent[0]);
        int parentEnd = find_parent(currentEnd, &parent[0]);

        if (parentStart != parentEnd) {
            minTree += currentValue;
            parent[parentStart] = parentEnd;
        }
    }

    cout << minTree << endl;


    return 0;
}