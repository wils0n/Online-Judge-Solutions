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

        vector <bool> v(N-1, false);
        vector <int> t(N);
        
        for (int i = 0; i < N; i++) {
            cin>>t[i];
        }

        bool cont = true;
        for (int i = 0; i < N-1; i++) {
            int resp = abs(t[i]-t[i+1]);
            if (resp < N || resp > 0) {
                v[resp-1] = true;
            }
        }

        
        bool band = true;
        for (int i = 0; i < N-1; i++) {
            if (!v[i]){
                band = false;
                break;
            }
        }

        if (band){
            cout << "Jolly" <<endl;
        } else {
            cout << "Not jolly" <<endl;
        }
        
        
    }

    return 0;
}

