/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int32_t getIthBit(int number, int bit) {
    int check=1;
    if(bit>0) check = 1<<(bit-1);
    if(check&number) return 1;
    else return 0;
}

int inverseIthBit(int number, int bit) {
    int check=1;
    if(bit>0) check = 1<<(bit-1);
    return number^check;
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
    int number;
    cin>>number;
    int bit;
    cin>>bit;
    while(test--) {
        cout<<"Getting Ith Bit: "<<getIthBit(number, bit)<<endl;
        cout<<"Inversing Ith Bit: "<<inverseIthBit(number, bit)<<endl;
    }
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}