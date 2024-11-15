#include <iostream> 
// #include <unordered_map>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    unsigned long recordNumber;
    cin >> recordNumber;
    map<string, int, greater<string>> entryRecord;

    for (unsigned long i =0; i <recordNumber; i++){
        string name, entryInfo;
        cin >> name >> entryInfo;

        if (entryInfo == "enter") {
            entryRecord[name] = i;
        } else {
            entryRecord.erase(name);
        }
    }

    for(auto& data : entryRecord){
        cout << data.first << '\n';
    }

    // std::vector<std::pair<std::string, int>> sortingArray(entryRecord.begin(), entryRecord.end());
    // std::sort(sortingArray.begin(), sortingArray.end(), 
    //     [](std::pair<std::string,int>& a, std::pair<std::string,int>& b)
    //     {
	// 		return a.first > b.first;	
    //     });

    //  for(auto& data : sortingArray)
    // {
    //     std::cout << data.first << '\n';
    // }
    return 0;
}