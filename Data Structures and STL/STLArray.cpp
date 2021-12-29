/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
    Basic methods in arrays:
        sort(starting address, ending address)
        arr.fill(5) - to fill all the values of arrays with 5
*/
#include<bits/stdc++.h>
#include<array>
#define int long long int
#define endl "\n"
using namespace std;

void inputArray(array<int, 6> &arr) {
    for(int i=0;i<arr.size();i++) {
        cin>>arr[i];
    }
}

void displayArray(const array<int, 6> &arr) { // Use const since it should not modify the array. So use const as good coding practices
    for(auto x: arr) { // For each loop
        cout<< x<< " ";
    }
    cout<<endl;
}

void updateArrayWithReference(array<int, 6> &arr, int index, int value) {
    arr.at(index) = value; // Affects actual array
}

void updateArrayWithValue(array<int, 6> arr, int index, int value) {
    arr.at(index) = value; // Does not affects actual array
}

void solve() {
    array<int, 6> arr;
    inputArray(arr); // Passes the copy of the array if function receives array input instead of address
    displayArray(arr);
    updateArrayWithValue(arr, 0, 12);
    displayArray(arr);
    updateArrayWithReference(arr, 0, 12);
    displayArray(arr);

    // Sort the array
    sort(arr.begin(), arr.end());
    displayArray(arr);
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