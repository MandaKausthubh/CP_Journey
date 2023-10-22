#include<bits/stdc++.h>
using namespace :: std;

int main(void) {
    int n, S = 0, q, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {cin >> q; S += q;}
    for(int i = 1; i <= 5; i++) {
        if((S+i) % (n+1) == 1) {c++; /*cout << (S+i) << " ";*/}
    }
    //cout << '\n';

    cout << 5 - c << endl;

    return 0;
}