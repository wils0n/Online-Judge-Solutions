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
#include <queue>
#include <iterator>
#include <sstream>


using namespace std;
#define ll long long
#define ull unsigned long long


int main(){

    int number;
    map <int, int> m;
    queue<int> q;
    while (cin>>number) {
        m[number]++;
        if (m[number]==1) q.push(number);
    }

    while(!q.empty()) {
        cout<<q.front() <<" "<<m[q.front()]<<endl;
        q.pop();
    }

    return 0;
}

