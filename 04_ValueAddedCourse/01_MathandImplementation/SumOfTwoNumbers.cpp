#include <iostream>
using namespace :: std;

int SumOfDigits(int n){
    int s = 0;
    while(n > 0) {s += n%10; n /= 10;}
    return s;
}

int main(void) {
    long long int test, n, x, y; cin >> test;
    for(int _ = 0; _ < test; _++) {
        cin >> n;
        if(n % 2 == 0) cout << (n/2) << ' ' << (n/2) << endl;
        else{
            x = (n-1)/2; y = x+1;
            int flag = 5;
            long long int pow = 1;
            while((x % (10*pow))/pow == 9) {
                //cout << (x % 10*pow)/pow << ' ' <<  x << ' ' << y << endl;
                x = x - 9*pow + flag*pow;
                if(flag == 5) {y += 4*pow; flag = 4;}
                else {y += 5*pow; flag = 5;}
                pow *= 10;
                //cout << (x % 10*pow)/pow << endl; 
            }
            cout << x << ' ' << y << endl;
        }
    }
    return 0;
}
