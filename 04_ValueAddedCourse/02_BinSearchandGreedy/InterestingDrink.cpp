#include <algorithm>
#include <iostream>
#include <vector>
using namespace :: std;

typedef vector<int> vi;

int main(void) {
    long long int n, q; cin >> n;
    vi V(n);
    for(int &s: V) cin >> s;
    cin >> q;
    vi S(q);
    for(int &x: S) cin >> x;
    sort(V.begin(), V.end());

    for(int x: S){
        auto iter = upper_bound(V.begin(), V.end(), x);
        cout << iter - V.begin() << endl;
    }
    return 0;
}
