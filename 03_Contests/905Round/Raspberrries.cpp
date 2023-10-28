#include <iostream>
#include <ostream>
using namespace :: std;

int main(void) {
    int test; cin >> test;
    for(int _ = 0; _ < test; _++) {
        int n, k; bool flag = true;
        cin >> n >> k;
        if(k != 4) {
            int x, mx = 0;
            for(int i = 0; i < n; i++) {
                cin >> x;
                if(x % k == 0) {flag = false; break;}
                mx = (mx < (x % k)) ? (x%k) : mx;
            }
            if (flag) cout << k - mx << 'a' << endl;
            else  cout << 0 << 'b' << endl;
        }
        else {
            int zero = 0, one = 0, two = 0, three = 0;
            for(int i = 0; i < n; i++) {
                int x;
                cin >> x;
                switch (x%k) {
                    case 0: {zero++; break;}
                    case 1: {one ++; break;}
                    case 2: {two ++; break;}
                    case 3: {three++;break;}
                }
               
            }
            if(zero > 0) cout << 0 << 'c' << endl;
            else if(three > 0 || (two && one)) cout << 1 << 'd' << endl;
            else if(one > 1 || two > 0) cout << 2 << 'e' << endl;
            else cout << 3 << 'f' << endl;

        }
    }
    return 0;
}
