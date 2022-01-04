/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

bool solve(int x) {
    if(x>0) {
        string checker = to_string(x);
        queue<int> stack;
        while(x!=0){
            stack.push(x%10);
            x=x/10;
        }
        string result = "";
        while(!stack.empty()) {
            result = result+to_string(stack.front());
            stack.pop();
        }
        if(result.compare(checker)) {
            return false;
        }
        else {
            return true;
        }
    }
    else if(x==0){
        return true;
    }
    else {
        return false;
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
    int x;
    cin>>x;
    while(test--) cout<<solve(x);
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}