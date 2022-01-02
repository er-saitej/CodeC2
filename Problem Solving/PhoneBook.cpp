/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void displayPhoneBook(map<string, set<int> > &phonebook) {
    for(pair<string, set<int> > x:phonebook) {
        cout<< x.first<< " ";
        for(auto y: x.second) {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void solve() {
    map<string, set<int> > phonebook;
    phonebook["Sai Tej"].insert(9989456782);
    phonebook["Sai Chand"].insert(76800234932);
    phonebook["Sai Tej"].insert(7013694807);
    displayPhoneBook(phonebook);
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