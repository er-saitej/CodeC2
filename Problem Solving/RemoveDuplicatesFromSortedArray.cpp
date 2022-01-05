/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int solve(vector<int> &nums) {
    if(nums.size()>0) {
        int index = 1;
        int pointer = 1;
        for(index=1;index<nums.size();index++) {
            if(nums[index]!=nums[index-1]) {
                nums[pointer] = nums[index];
                pointer++;
            }
        }
        return pointer;
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
    vector<int> nums;
    int n;
    for(int i=0;i<1;i++) {
        cin>>n;
        nums.push_back(n);
    }
    while(test--) cout<<solve(nums);
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}