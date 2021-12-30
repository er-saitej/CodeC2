/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
    Methods:
        When pushing an element into vector, it takes constant time.
        When doubling of vector takes place, it takes linear time. - expensive operation. So, we use reserve to reserve some space and work on a vector [possibly to avoid expensive operation].
        
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void displayVector(vector<int> &vector) {
    cout<< "Displaying vector"<<endl;
    for(auto x: vector) {
        cout<< x<< " ";
    }
    cout<<endl;
}

void popAndClearVector(vector<int> &vector) {
    cout<< "Show and Pop"<< endl;
    for(auto x: vector) {
        cout<< vector.back()<< " ";
        vector.pop_back();
    }
    cout<<endl;
}

void solve() {
    vector<int> vector;
    cout<< "Size and capacity: "<<vector.size()<< " "<< vector.capacity()<< endl;
    displayVector(vector);
    for(int i=0;i<6;i++) {
        int value;
        cin>>value;
        vector.push_back(value);
    }
    displayVector(vector);
    cout<< "Size and capacity: "<<vector.size()<< " "<< vector.capacity()<< endl;
    vector.push_back(20);
    vector.push_back(15);
    vector.push_back(2);
    displayVector(vector);
    cout<< "Size and capacity: "<<vector.size()<< " "<< vector.capacity()<< endl;
    sort(vector.begin(), vector.end());
    displayVector(vector);
    popAndClearVector(vector);
    displayVector(vector);
    cout<< "Size and capacity: "<<vector.size()<< " "<< vector.capacity()<< endl;
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