#include <iostream>
using namespace :: std;

int main(void) {
    int test, x, k; cin >> test;
    for(int _ = 0; _ < test ; _++){
        cin >> x >> k;
        int sum = 0;
        int c = x;
        while(c > 0){
            sum += c % 10;
            c /= 10;
        }

        if(sum % k == 0) cout << x << endl;
        else{
            int delta = k - k%sum;
            while(sum % k){
                x++;
                int c1 = x;
                sum = 0;
                while(c1 > 0){
                    sum += c1 % 10;
                    c1 /= 10;
                }
            }
            cout << x << endl;
        }
    }
}
