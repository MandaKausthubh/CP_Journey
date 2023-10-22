#include <bits/stdc++.h>
using namespace :: std;

pair<int, int> highest_pow(int n, int k) {
    int x = 1, c = 0;
    while(n % x == 0) {x *= k; c += 1;}
    return {x/k, c - 1};
}

int main(void) {
    int _, n, m, k1, k2, a, b, p, q; 
    cin >> _;
    for(int i = 0; i < _; i++) {
        cin >> n >> m;
        //cout << (n+m);
        a = highest_pow(n, 3).first;
        b = highest_pow(n, 3).second;
        k1 = n / a;
        k2 = m / k1;
        if(m % k1 == 0 && highest_pow(k2, 3).second + highest_pow(k2, 2).second <= b && k2/(highest_pow(k2, 2).first * highest_pow(k2, 3).first) == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}