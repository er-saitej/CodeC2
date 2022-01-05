/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
    Methods:
        To check even or odd, we use bitwise operators.
        Even number will have last bit 0 and odd number will have last bit 1 always.
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve() {
    int number;
    cin>>number;
    if(number&1) {
        cout<<"Odd";
    }
    else {
        cout<<"Even";
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