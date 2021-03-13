/*

Author : wils0n

github:https://github.com/wils0n

*/


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>
#include <bitset>
#include <set>
#include <map>
#include <iterator>


using namespace std;
#define ll long long
#define ull unsigned long long

int sequential_search(int target, vector <int> v) {
    for (int i = 0; i < v.size(); i++)
    {
        if (target == v[i]) {
            return i + 1;
        }
    }
    return -1;
    
}

int main(){

    int N, Q;
    int ncase = 1;
    while(cin>> N >> Q){
        if (N==0 && Q == 0) break;

        // int v[N];
        vector <int> v(N);
        for (int i = 0; i < N; i++) {
            cin>>v[i];
        }
        sort(v.begin(), v.end());

        int target;
        cout << "CASE# "<<ncase <<":"<<endl;
        for (int i = 0; i < Q; i++) {
            cin>>target;
            if (sequential_search(target, v) == -1) {
                cout << target << " not found"<<endl;
            } else {
                cout << target << " found at "<< sequential_search(target, v)<<endl; 
            }
        }
        ncase = ncase + 1;
    }

    return 0;
}

