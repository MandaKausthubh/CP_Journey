#include<bits/stdc++.h>
#include <string>
using namespace :: std;

// BITWISE OPERATORS
//
// Bitwise and (&), or (|), XOR(^), LeftShift(<<), Rightshift (>>), Complement Operator (~)


// BitMask
// It is a small set of booleans has native support in most programming Languages. Thus, we use 
//
string BinRep(int n) {
    int pow = 1;
    string S = "";
    while(n > 0) {
        if((n & pow) == 0) S.insert(0, "0");
        else S.insert(0, "1");
        cout << pow << '\n';
        n -= n&pow;
        pow = pow << 1;
    }
    return S;
}

int main(void) {
    cout << BinRep(34) << endl;   
    return 0;
}
