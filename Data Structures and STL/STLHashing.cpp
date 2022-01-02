/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
    Methods:
        Hashtable insertion - O(1)
        Search Operation - O(1)
        Erase Operation - O(1) - will delete key value pair inside the hash table
    ** Very very powerful data structure.
    Disadvantage of array<pair<string, value>> - searching take more time.
*/
#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

void displayMap(unordered_map<string, string> &map) {
    for(pair<string, string> x:map) {
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
}

void solve() {
    unordered_map<string, string> map;
    for(int i=0;i<5;i++) {
        string key;
        string value;
        cin>>key;
        cin>>value;
        map[key] = value;
    }
    cout<<map["Map1"]<<endl;
    if(map.count("Map1")) cout<<"Item is present"; // Will return 1 if key is present in the hashtable | Or it will return 0
    else cout<<"Item is not present";
    cout<<endl;
    // cout<<map["Map9"]<<endl;
    // if(map["Map9"]=="") cout<<"Empty is printed"<<endl;
    map["Map3"] = "Special Map";
    cout<<map["Map3"]<<endl<<endl;
    displayMap(map);
    map.erase("Map3");
    displayMap(map);
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