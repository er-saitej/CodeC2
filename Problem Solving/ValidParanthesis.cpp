/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

bool solve(string &s) {
    stack<char> stack;
    bool result = true;
    for(auto x:s) {
        if(x=='(' || x=='[' || x=='{') {
            stack.push(x);
        }
        else {
            if(stack.empty()) return false;
            if(x==')') {
                if(stack.top()=='(') stack.pop();
                else result = false;
            }
            if(x==']') {
                if(stack.top()=='[') stack.pop();
                else result = false;
            }
            if(x=='}') {
                if(stack.top()=='{') stack.pop();
                else result = false;
            }
        }
    }
    if(!stack.empty()) return false;
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