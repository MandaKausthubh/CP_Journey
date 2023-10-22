#include <bits/stdc++.h>
using namespace :: std;

int main(void) {
	int n;
	cin >> n;
	int sum = 0;
	vector<int> arr(n);
	for(int &a: arr) { cin >> a; sum += a;}

	int parity = sum% 2;

	int count = 0;

	for(int a: arr)
		if(a % 2 == parity) count ++ ;

	cout << count << endl;

	return 0;
}

