/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int number, int i, int j) {
    int mask1 = -1<<(j+1);
    int mask2 = -1<<(i);
    mask2 = ~mask2;
    int mask = mask1|mask2;
    cout<<(number&mask);
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
    int number, i, j;
    cin>>test>>number>>i>>j;
    while(test--) solve(number, i, j);
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}