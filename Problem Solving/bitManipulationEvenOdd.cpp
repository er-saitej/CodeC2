/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test) {
    int check = 1<<0;
    if(test&check) cout<<"odd"<<endl;
    else cout<<"even"<<endl;
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
    int number;
    cin>>number;
    while(test--) solve(number);
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}