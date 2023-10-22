#include <bits/stdc++.h>
using namespace :: std;

int main(void) {
    long long int test, a, b, x, y; cin >> test;
    for(int i_ = 0; i_ < test; i_++) {
        cin >> a >> b;
        if(__gcd(a, b) == 1) {
            cout << 1 << endl;
            cout << a << ' ' << b << endl;
        }
        else {
            x = 0; y = 1;
            while(__gcd(abs(x - a), abs(y -b)) != 1) {
                x += 1;
                y += 1;
            }
            cout << 2 << endl;
            cout << x << ' ' << y << endl;
            cout << a << ' ' << b << endl;
        }
    }
    return 0;
}