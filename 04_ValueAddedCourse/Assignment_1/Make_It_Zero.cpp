#include<bits/stdc++.h>
using namespace :: std;

int main(void) {
    int t_, n; cin >> t_;
    for(int i = 0; i < t_; i++) {
        cin >> n;
        vector<int> V(n);
        int accumilate = 0;
        for(int &x: V){
		cin >> x;
		accumilate = accumilate ^ x;
	}

	if(accumilate == 0) {
		cout << "1\n1 " << n << "\n";
	}
	else {
		if(n % 2 == 0) cout << "2\n1 " << n << "\n1 " << n << "\n";
		else{
			cout << 4 << "\n";
			cout << 1 << " " << n << "\n";
			cout << 1 << " " << n-1 << "\n";
			cout << n-1 << " " << n << "\n";
			cout << n-1 << " " << n << "\n";
		}
	}
    }
    return 0;
}
