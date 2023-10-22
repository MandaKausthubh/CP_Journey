#include <bits/stdc++.h>
using namespace :: std;

int main(void) {
    int test, x, k, a; cin >> test;
    for(int i_ = 0; i_ < test; i_++){
        cin >> x >> k;
        if(x % k != 0) cout << 1 << endl << x << endl;
        else {
            cout << 2 << endl << x-1 <<' '<< 1 << endl;
        }
    }
    return 0;
}