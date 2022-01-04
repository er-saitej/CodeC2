/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

void solve(vector<int> &nums, int target) {
    map< int, vector<int> > map;
    for(int i=0;i<nums.size();i++) {
        map[nums.at(i)].push_back(i);
    }
    sort(nums.begin(), nums.end());
    int left=0;
    int right=nums.size()-1;
    while(left<right) {
        if(nums[left]+nums[right]==target) {
            break;
        }
        if(nums[left]+nums[right]>target) {
            right--;
        }
        else {
            left++;
        }
    }
    if(nums[left]!=nums[right]) cout<<map[nums[left]].front()<<" "<<map[nums[right]].front();
    else cout<<map[nums[left]].front()<<" "<<map[nums[right]].back();
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
    int target;
    int n;
    for(int i=0;i<2;i++) {
        cin>>n;
        nums.push_back(n);
    }
    cin>>target;
    while(test--) solve(nums, target);
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}