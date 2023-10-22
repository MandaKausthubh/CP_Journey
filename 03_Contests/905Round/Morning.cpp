#include <bits/stdc++.h>
#include <string>
using namespace :: std;
typedef string str;


int main(void) {
    int test; cin >> test;
    str S;
    for(int _ = 0; _ < test; _ ++) {
        cin >> S;
        int sum = 0;
        int anchor = 1;
        for(int i = 0; i < 4; i++){
            int digit = (int)(S[i]) - (int)'0';
            if (digit == 0) digit = 10;
            if (digit != 0) sum += abs(anchor - digit) + 1;
            //else sum += abs(10 - digit) + 1;

            anchor = (digit == 0) ? 10 : digit; 
            //cout << digit << ' '; 
        }

        cout << sum << endl;
    }
}
