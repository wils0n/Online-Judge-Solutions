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
#include <ctype.h>
#include <stdio.h>

using namespace std;
#define ll long long
#define ull unsigned long long


int main(){
    string str;
    vector <string>v;
    map <string, string>m;
    while(getline(cin, str)) {
        string temp = str;
        transform(str.begin(), str.end(), str.begin(), ::tolower); 
        v.push_back(str);
        m[str] = temp;
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++){
        cout<<"-->"<<v[i]<<endl;
    }

    cout <<m[v[v.size()-1]]<<endl;
    
    return 0;
}

