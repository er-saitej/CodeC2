/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int solve(int number, int bits) {
    int mask = 1;
    bits = bits-1;
    while(bits--) {
        mask = mask<<1;
        mask = mask|1;
    }
    mask = ~mask;
    return number&mask;
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
    int number;
    int bits;
    cin>>test>>number>>bits;
    while(test--) cout<<solve(number, bits);
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}