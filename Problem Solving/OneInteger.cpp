/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve() {
    vector<int> nums;
    nums.reserve(5);
    for(int i=0;i<5;i++) {
        int n;
        cin>>n;
        nums.push_back(n);
    }
    int p1;
    int p2;
    multiset<int> set;
    for(auto x: nums) {
        set.insert(x);
    }
    int result = 0;
    while(set.size() != 1) {
        p1 = *set.begin();
        set.erase(set.begin());
        p2 = *set.begin();
        set.erase(set.begin());
        set.insert(p1+p2);
        result = result + p1 + p2;
    }
    cout<<result;
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