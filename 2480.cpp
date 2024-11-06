#include <iostream> 
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    vector<int> v(7); 

    v.at(a) = v.at(a) + 1;
    v.at(b) = v.at(b) + 1;
    v.at(c) = v.at(c)  + 1;

    vector<int>::iterator it, it2;
    vector<int>::reverse_iterator it3;

    it = find(v.begin(), v.end(), 3);
    if (it != v.end()) {
        cout << (it-v.begin()) * 1000 + 10000 << endl;
        return 0;
    }

    it2 = find(v.begin(), v.end(), 2);
    if (it2 != v.end()) {
        cout << (it2-v.begin()) * 100 + 1000 << endl;
        return 0;
    }

    it3 = find(v.rbegin(), v.rend(), 1);
     if (it3 != v.rend()) { 
        cout << (v.rend() - it3 -1) * 100 <<endl;
     }
    return 0;
}

// /* 참고할만한 코드
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int x, y, z;

// int main()
// {
// 	cin>>x>>y>>z;
// 	if (x==y && y==z) cout<<10000+x*1000;
// 	else if (x==y || x==z) cout<<1000+x*100;
// 	else if (y==z) cout<<1000+y*100;
// 	else cout<<max(x, max(y, z))*100;
// 	return 0;
// }
//  */