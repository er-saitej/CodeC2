/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
    Method: It is a heap data structure.
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve() {
    priority_queue<int> heap; // is max heap
    // priority_queue < int, vector<int>, greater<int> > heap; // is min heap
    for(int i=0;i<6;i++) {
        int n;
        cin>>n;
        heap.push(n);
    }
    while(!heap.empty()) {
        cout<<heap.top()<<" ";
        heap.pop(); // We get elements in a decending order. Called as Max Heap
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