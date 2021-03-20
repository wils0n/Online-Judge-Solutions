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
#include<sstream>


using namespace std;
#define ll long long
#define ull unsigned long long


int main(){

    string str, value, key;

    map <string, string> m;
    while(getline(cin, str)) {
        if(str == "")
            break;
        istringstream is(str);
        
        is >> value >> key;
        m[key] = value;
    }
    
    string word;
    while(cin>>word) {
        if (m[word]== "") cout<< "eh" <<endl;
        else cout<<m[word] <<endl;
        /*
        map<string, string>::iterator it;
        it = r.find(a);
        if(it != r.end()) cout << it->second << endl;
        else cout << "eh" << endl;
        */
    }

    return 0;
}

