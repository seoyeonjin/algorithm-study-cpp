#include <iostream>
#include <deque>
#include <unistd.h>
#include <vector>

using namespace std;

int main() {
    int subin, sister;
    int minCount = 100001;

    scanf("%d %d", &subin, &sister);

    deque<pair<int, int>> subinsLocation;
    vector<int> visited(200001,0);

    subinsLocation.push_back({subin, 0});
    visited[subin] = 0;

    while (subinsLocation.size() != 0){
        int poppedLocation = subinsLocation[0].first;
        int count = subinsLocation[0].second;

        subinsLocation.pop_front();

        if (poppedLocation > sister){
            if (visited[poppedLocation-1] == 0 || visited[poppedLocation-1] >= count+1){
                subinsLocation.push_back({poppedLocation-1, count+1});
                visited[poppedLocation-1] = count+1;
            }
        } else if (poppedLocation == sister){
            if (minCount > count){
                minCount = count;
            }
        } else {
            if (poppedLocation -1 >= 0){
                if (visited[poppedLocation-1] == 0 || visited[poppedLocation-1] >= count+1){
                subinsLocation.push_back({poppedLocation-1, count+1});
                visited[poppedLocation-1] = count+1;
                }
            }
            if (visited[poppedLocation+1] == 0 || visited[poppedLocation+1] >= count+1){
                subinsLocation.push_back({poppedLocation+1, count+1});
                visited[poppedLocation+1] = count+1;
            }
            if (visited[poppedLocation*2] == 0 || visited[poppedLocation*2] >= count+1){
                if (poppedLocation != 0){
                    subinsLocation.push_back({poppedLocation*2, count});
                    visited[poppedLocation*2] = count;
                }
            }
        }
    }

    printf("%d\n", minCount);
    return 0;
}