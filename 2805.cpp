#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

int main() {
    long long treeNumber, targetHeight;

    vector<long long> treeList;
    long long maxHeight = 0;


    scanf("%llu %llu", &treeNumber, &targetHeight);

    for (int i = 0; i < treeNumber; i++){
        long long height;
        scanf("%llu", &height);
        treeList.push_back(height);
        if (maxHeight < height){
            maxHeight = height;
        }
    }

    long long start = 0;
    long long end = maxHeight;
    long long mid = 0;
    long long tempHeight = 1000000000;

    while (start <= end){
        long long currentHeight = 0;
        long long mid = (start + end ) / 2;

        for (long long i = 0; i < treeNumber; i++){
            if (treeList[i] > mid){
                currentHeight += treeList[i] - mid;
            }
        }

        if (currentHeight > targetHeight){
            start = mid+1;
            tempHeight = mid;
        } else if (currentHeight == targetHeight){
            tempHeight = mid;
            break; 
        } else { 
            end = mid-1;
        }
    }

    cout << tempHeight << '\n';


    return 0;
}