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
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double part = pow(x2 - x1, 2) + pow(y2 - y1, 2);
    double resp = pow(part, 0.5);

    printf("%0.4f\n", resp);

    return 0;
}

