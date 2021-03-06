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

int clearIthBit(int number, int bit) {
    int check=1;
    if(bit>0) check = 1<<(bit-1);
    check = ~check;
    return number&check;
}

int setIthBit(int number, int bit) {
    int check=1;
    if(bit>0) check = 1<<(bit-1);
    return number|check;
}

int updateIthBit(int number, int bit, int value) {
    int bitValue = getIthBit(number, bit);
    if(bitValue==value) return number;
    int check = 1;
    if(bit>0) check=1<<(bit-1);
    if(bitValue == 1) {
        return number&(~check);
    }
    else {
        return number|check;
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
    int number;
    cin>>number;
    int bit;
    cin>>bit;
    while(test--) {
        cout<<"Getting Ith Bit: "<<getIthBit(number, bit)<<endl;
        cout<<"Inversing Ith Bit: "<<inverseIthBit(number, bit)<<endl;
        cout<<"Clearing Ith Bit: "<<clearIthBit(number, bit)<<endl;
        cout<<"Setting Ith Bit: "<<setIthBit(number, 3)<<endl;
        cout<<"Updating Ith Bit: "<<updateIthBit(number, 3, 1)<<endl;
    }
    cerr<< ((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}