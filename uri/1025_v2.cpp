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

int v[10000];
int N, Q;

int partition(int l, int h){
	int pivot = v[h];
	int i = l-1;
	for(int j=l;j<h;j++){
		if(v[j]<=pivot)swap(v[++i],v[j]);
	}
	swap(v[++i],v[h]);
	return i;
}

void quickSort(int l, int h){
	if(l<h){
		int pivot = partition(l,h);
		quickSort(l, pivot-1);
		quickSort(pivot+1, h);
	}
}

/*
void buble_sort(){
    // int N = sizeof v / sizeof v[0];
    for(int i=0; i < N; i++)
    {
        for(int j=0; j < N; j++)
        {
            if(v[i] < v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}*/

int sequential_search(int target) {
    int N = sizeof v / sizeof v[0];
    for (int i = 0; i < N; i++)
    {
        if (target == v[i]) {
            return i + 1;
        }
    }
    return -1;
    
}

int main(){

    int ncase = 1;
    while(cin>> N >> Q){
        if (N==0 && Q == 0) break;

        for (int i = 0; i < N; i++) {
            cin>>v[i];
        }

        // buble_sort();
        quickSort(0, N-1);
        
        int target;
        cout << "CASE# "<<ncase <<":"<<endl;
        for (int i = 0; i < Q; i++) {
            cin>>target;
            if (sequential_search(target) == -1) {
                cout << target << " not found"<<endl;
            } else {
                cout << target << " found at "<< sequential_search(target)<<endl; 
            }
        }
        ncase = ncase + 1;
    }

    return 0;
}

