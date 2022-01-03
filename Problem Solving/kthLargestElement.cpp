/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test) {
    vector<int> nums;
    int k = 4;
    int n;
    for(int i=0;i<9;i++) {
        cin>>n;
        nums.push_back(n);
    }
    priority_queue<int, vector<int>, greater<int> > pq;
    set<int> results;
    vector<int> actualResults;
    for(auto x: nums) {
        pq.push(x);
    }
    while(!pq.empty()) {
        results.insert(pq.top());
        pq.pop();
    }
    actualResults.reserve(results.size());
    for(auto x:results) {
        actualResults.push_back(x);
    }
    cout<<endl<<actualResults[k-1];
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
    while(test--) solve(INT_MAX);
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}