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
#include <stack>
#include <iterator>


using namespace std;
#define ll long long
#define ull unsigned long long


int main(){
    int T;
    string s;
    cin >> T;
    // getchar();
    cin.ignore();
    while(T--) {
        getline(cin,s);
        
        if (s.size()%2 != 0) cout<<"No"<<endl;
        else {

            stack <char> stack;
            bool flag = 0;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '(' || s[i] == '[') {
                    stack.push(s[i]);
                } else if (!stack.empty() && stack.top() == '(' && s[i] == ')') {
                    stack.pop();
                } else if (!stack.empty() && stack.top() == '[' && s[i] == ']') {
                    stack.pop();
                } else {
                    stack.push(s[i]);
                }
            }
            
            if (!stack.empty()) {
                cout <<"No" <<endl;
            } else {
                cout <<"Yes" <<endl;
            }
        }
    }
    

    return 0;
}

