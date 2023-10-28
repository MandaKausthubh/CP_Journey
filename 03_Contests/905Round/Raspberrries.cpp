#include <iostream>
#include <ostream>
using namespace :: std;

int main(void) {
    int test; cin >> test;
    for(int _ = 0; _ < test; _++) {
        int n, k, flag = 1;
        cin >> n >> k;
        if(k != 4) {
            int x, mx = 0;
            for(int i = 0; i < n; i++) {
                cin >> x;
                if(x % k == 0) {flag = 0; cout << 0 << endl; break;}
                mx = (mx < (x % k)) ? x%k : mx;
            }
            if (flag) cout << k - mx << endl;
        }
        else {
            int zero = 0, one = 0, two = 0, three = 0;
            for(int i = 0; i < n; i++) {
                int x;
                cin >> x;
                switch (x%k) {
                    case 0: zero++; break;
                    case 1: one ++; break;
                    case 2: two ++; break;
                    case 3: three++;break;
                }
               
            }
            if(zero > 0) cout << 0 << endl;
            else if(three > 0 || (two && one)) cout << 1 << endl;
            else if(one > 1 || two > 0) cout << 2 << endl;
            else cout << 3 << endl;

        }
    }
    return 0;
}
