#include <bits/stdc++.h>
using namespace :: std;

int main(void) {
    int test;
    cin >> test;
    int x, y, n;
    for(int i_ = 0; i_ < test; i_ ++){
        //cout << 'a';
        cin >> x;
        y = 0;
        n = 2;
        while(true) {
            if(x % n != 0) {
                y += (n/2);
                break;
            }
            n *= 2;
        }
        //cout << y << '\n';
        
        if(x == y) {
            if(x == 1) y = 3;
            else y += 1;
        }

        cout << y << '\n';
    }
    return 0;
}