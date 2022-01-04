/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

int solve(string s) {
    if(s!=""){
        unordered_map<int, bool> map;
        unordered_map<int, int> ref;
        set<int> result;
        int left = 0;
        int length=0;
        while(left<=s.length()-1) {
            if(map[s[left]]==true) {
                // cout<<map[s[left]]<<" "<<length<<" "<<left+1<<endl;
                result.insert(length);
                map.clear();
                length = 0;
                left=ref[s[left]]+1;
                ref.clear();
            }
            map[s[left]]=true;
            ref[s[left]]=left;
            left++;
            // cout<<"Pointer is "<<left<<endl;
            length++;
        }
        result.insert(length);
        int mainR = 0;
        for(auto x: result) {
            mainR = x;
        }
        return mainR;
    }
    else {
        return 0;
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
    string s;
    cin>>s;
    while(test--) cout<<solve(s);
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}