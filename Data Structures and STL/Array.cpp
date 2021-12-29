/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void updateArray(int *arr, int index, int value) { // Writing int arr[] and int *arr are same.
    arr[index] = value;
}

void displayArray(int *arr, int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void solve() {
    int arr[5];
    for(int i=0;i<5;i++) {
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(int); // To get the size of array. In this case, it returns 5
    cout<<"Base address of the array: "<<arr; // Prints address of the array
    cout<<endl;
    displayArray(arr, size);
    updateArray(arr, 0, 14); // Passses array by reference. So actual array is updated.
    displayArray(arr, size);
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