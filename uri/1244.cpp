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
#include <sstream>


using namespace std;
#define ll long long
#define ull unsigned long long


struct palabra{
       int len;
       int pos;
       string word;
};

bool compare(palabra pa, palabra pb){

    return pa.len < pb.len;
}

int compare2(palabra pa, palabra pb){

    if(pb.len == pa.len){ 
        return pa.pos - pb.pos;
    }
    return pb.len - pa.len;
}

int main(){

    int N;
    string str;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        getline(cin, str);

        stringstream ss(str); // Used for breaking words 
        string word; // to store individual words 
    
        int count = 0; 
        vector<palabra> v;
        while (ss >> word) {
            struct palabra p;
            p.len = word.length();
            p.word = word;
            p.pos = count;
            v.push_back(p);
            count++;
        }

        sort(v.begin(), v.end(), compare2);
        
        // reverse(v.begin(), v.end());
        int n = v.size();
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1) {
                cout<<v[i].word<<" ";
            } else {
                cout<<v[i].word<<endl;
            }
        }
        
    }

    return 0;
}

