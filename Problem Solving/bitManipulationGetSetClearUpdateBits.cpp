/*
    author: Sai Tej Sunkara
    language: C++ Advanced (clang++ 13.x)
*/
#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int getIthBit(int number, int bit) {
    int check = 1<<(bit-1);
    if(number&check) return 1;
    return 0;
}

int setIthBit(int number, int bit) {
    int check = 1<<(bit-1);
    return number|check;
}

int clearIthBit(int number, int bit) {
    int check = 1<<(bit-1);
    check = ~check;
    return number&check;
}

int updateIthBit(int number, int bit, int value) {
    int check = 1<<(bit-1);
    if(value==0) {
        check = ~check;
        return number&check;
    }
    return number|check;
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
    int number;
    int bit;
    cin>>test;
    while(test--) {
        cin>>number;
        cin>>bit;
        cout<<getIthBit(number, bit)<<endl;
    }
    cin>>test;
    while(test--) {
        cin>>number;
        cin>>bit;
        cout<<setIthBit(number, bit)<<endl;
    }
    cin>>test;
    while(test--) {
        cin>>number;
        cin>>bit;
        cout<<clearIthBit(number, bit)<<endl;
    }
    int value;
    cin>>test;
    while(test--) {
        cin>>number;
        cin>>bit;
        cin>>value;
        cout<<updateIthBit(number, bit, value)<<endl;
    }
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}