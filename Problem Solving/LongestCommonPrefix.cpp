/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

string solve(vector<string> &strs) {
    unordered_map<int, char> map;
    int check = INT_MAX;
    for(auto x: strs) {
        if(x.length()<check) check = x.length();
    }
    for(auto x: strs) {
        for(int i=0;i<check;i++) {
            if(map[i]==NULL) {
                map[i] = x[i];
            }
            else if(map[i] != x[i]) {
                map[i] = ';';
            }
        }
    }
    string result = "";
    for(int i=0;i<check;i++) {
        if(map[i]==';') break;
        else {
            result = result+map[i];
        }
    }
    return result;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr);
        freopen("output.txt", "w", stdout);
    #endif
    vector<string> strs;
    int test;
    cin>>test;
    string s;
    for(int i=0;i<3;i++) {
        cin>>s;
        strs.push_back(s);
    }
    while(test--) cout<<solve(strs);
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}