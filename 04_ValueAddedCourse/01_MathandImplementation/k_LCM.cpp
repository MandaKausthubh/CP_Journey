#include <bits/stdc++.h>
#include <cmath>
#include <ostream>
using namespace :: std;

int main(void) {
	long long int t_, n, k;
	cin >> t_;
	for(int i = 0; i < t_; i++) {
	    cin >> n >> k;
        if(n % 2 == 1) cout << ((n-1)/2) << ' ' << ((n-1)/2) << ' ' << 1 << endl;
        else{
            if((n/2) % 2 == 1) cout << 2 << ' ' << (n/2)-1 << ' ' << (n/2)-1 << endl;
            else cout << n/2 << ' ' << n/4 << ' ' << n/4 << endl;
        } 
    }
	return 0;
}












