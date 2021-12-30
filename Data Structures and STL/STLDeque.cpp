/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
    Methods:
        It doesn't use a continuous memory allocation. Rather, it uses dynamic memory allocation which will be linked through linkers.
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void displayDeque(deque<int> &deque) {
    cout<<"Displaying deque"<<endl;
    for(auto x: deque) {
        cout<<x<< " ";
    }
    cout<<endl;
}

void displaySizeOfDeque(deque<int> &deque) {
    cout<<"Size of deque "<<deque.size()<<" "<<endl;
}

void solve() {
    deque<int> deque;
    for(int i=0;i<6;i++) {
        int n;
        cin>>n;
        deque.push_back(n);
    }
    int size = deque.size();
    for(int i=0;i<size;i++) {
        deque.push_front(deque.at(i+i));
    }
    displayDeque(deque);
    displaySizeOfDeque(deque);
    deque.pop_back();
    displayDeque(deque);
    displaySizeOfDeque(deque);
    deque.pop_front();
    displayDeque(deque);
    displaySizeOfDeque(deque);
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