#include <bits/stdc++.h>
using namespace :: std;

int main(void) {
    long long int test, n, s, a;
    cin >> test;
    for(int i_ = 0; i_ < test; i_++) {
        s = 0;
        a = 0;
        cin >> n;
        vector<int> V(n);
        for(int &x : V) {
            cin >> x;
            s += x;
            if(x == 1) a += 1;
            a += 1;
        }
        if(n == 1) cout << "NO\n";
        else {
            if(a > s) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}