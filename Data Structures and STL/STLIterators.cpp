/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
    Methods:
        Iterators - Provides some mechanism to loop on a container.
        Iterators - maps onto address locations.
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve() {
    multiset<string> set;
    string input;
    for(int i=0;i<5;i++) {
        cin>>input;
        set.insert(input);
    }
    for(multiset<string>::iterator it = set.begin(); it!= set.end(); it++) { // Iterator traverse through address locations
        cout<<*it<<" ";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr);
        freopen("output.txt", "w", stdout);
    #endif
    int test;
    cin>>test;
    while(test--) solve();
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}