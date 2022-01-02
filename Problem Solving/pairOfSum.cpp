/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
    Question: Given a list of numbers and k, check the pair whose sum equals to k
*/
#include<bits/stdc++.h>
#include<array>
#define int long long int
#define endl "\n"
using namespace std;

void solve() {
    int k = 8;
    priority_queue<int> pq;
    vector<int> vec;
    vec.reserve(8);
    int n;
    for(int i=0;i<8;i++) {
        cin>>n;
        pq.push(n);
    }
    while(!pq.empty()) {
        vec.push_back(pq.top());
        pq.pop();
    }
    // sorting an array - O(N*LogN)
    int left = 0;
    int right = vec.size()-1;
    while(left<=right) {
        if(vec.at(left)+vec.at(right) > k) {
            left++;
        }
        else {
            right--;
        }
        if(vec.at(left)+vec.at(right) == k) {
            cout<<left<<right<<endl;
        }
    }
    // Traversing an array - O(N)
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