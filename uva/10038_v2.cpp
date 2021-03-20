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
#include <cmath>


using namespace std;
#define ll long long
#define ull unsigned long long


int main(){
    int N;
    while(cin>>N){

        vector <bool> v(N, false);
        vector <int> t(N);
        
        for (int i = 0; i < N; i++) {
            cin>>t[i];
        }
        v[0]=true;
        for (int i = 0; i < N-1; i++) {
            int resp = abs(t[i]-t[i+1]);
            if(resp > 0 && resp < N)
                v[resp] = true;
        }

        // for (int i = 0; i < N; i++) {
        //     cout<<v[i]<<" ";
        // }

        vector<bool>::iterator it;
        it=find(v.begin(), v.end(),false); //if found, is not jolly
        if (it == v.end()){ //when not found, it is equal to last
            cout << "Jolly" <<endl;
        } else {
            cout << "Not jolly" <<endl;
        }
        
        
    }

    return 0;
}

