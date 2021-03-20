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


int main(){
    map<char, int>m;
    m['1'] = 2; m['2'] = 5; m['3'] = 5; m['4'] = 4; m['5'] = 5;
    m['6'] = 6; m['7'] = 3; m['8'] = 7; m['9'] = 6; m['0'] = 6;

    string str;
    int T;
    cin >> T;
    cin.ignore();
    while(T--) {
        getline(cin, str);
        int s = 0;
        for (int i = 0; i < str.size(); i++){
            s = s + m[str[i]];
            // cout <<m[str[i]]<<endl;
        }
        cout<<s<<" leds"<<endl;
    }
    

    return 0;
}

