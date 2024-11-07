#include <iostream>
#include <vector>

using namespace std;

int main (){
    int count, bowl;

    cin >> bowl >> count;

    vector<int> bowlList(bowl);

    for (int i=0; i < count; i++){
        int start, end, number;

        cin >> start >> end >> number;

        for (int j=start-1; j <end; j++){
            bowlList[j] = number;
        }
    }

    for (auto elem : bowlList){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}