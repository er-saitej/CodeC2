/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl '\n'
using namespace std;

int solve(string s) {
    int result=0;
    unordered_map<char, int> map;
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;
    for(int i=0;i<s.length();i++) {
        if((s[i]=='I')&&(s[i+1]=='V' || s[i+1]=='X')) {
            if(s[i+1]=='V') {
                result = result+4;
            }
            else {
                result = result+9;
            }
            i++;
        }
        else if((s[i]=='X')&&(s[i+1]=='L' || s[i+1]=='C')) {
            if(s[i+1]=='L') {
                result = result+40;
            }
            else {
                result = result+90;
            }
            i++;
        }
        else if((s[i]=='C')&&(s[i+1]=='D' || s[i+1]=='M')) {
            if(s[i+1]=='D') {
                result = result+400;
            }
            else {
                result = result+900;
            }
            i++;
        }
        else {
            result = result+map[s[i]];
        }
        // cout<<i<<endl<<result<<endl;
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
    int test;
    cin>>test;
    string s;
    cin>>s;
    while(test--) cout<<solve(s);
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}