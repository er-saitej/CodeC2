/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve(int test) {
    cout<<test<<endl;
}

int32_t main() {
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr);
        freopen("output.txt", "w", stdout);
    #endif
    int test;
    cin>>test;
    while(test--) solve(INT_MAX);
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}