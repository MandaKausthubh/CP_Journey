#include <bits/stdc++.h>
#include <cinttypes>
using namespace :: std;

int main(void) {
    int test; cin >> test;
    for(int _ = 0; _ < test; _++){
        int n; cin >> n;
        if(n % 3 == 0) {
            if(n-5 <= 0 || n-5 == 1 || n-5 == 4) cout << "NO\n";
            else cout << "YES\n1 4 " << n-5 << '\n';
        }
        else if(n % 3 == 1) {
            if(n-3 <= 0 || n-3 == 1 || n-3 == 2) cout << "NO\n";
            else cout << "YES\n1 2 " << n-3 << '\n';
        }
        else if(n % 3 == 2) {
            if(n-3 <= 0 || n-3 == 1 || n-3 == 2) cout << "NO\n";
            else cout << "YES\n1 2 " << n-3 << '\n';
        }
        else cout << "NO\n";
    }
    return 0;
}




