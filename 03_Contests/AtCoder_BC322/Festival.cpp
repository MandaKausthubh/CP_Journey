#include <bits/stdc++.h>
using namespace :: std;

int main(void) {
    long long int n, m;
    cin >> n >> m;
    vector<int> Arr(m);
    for(int &x: Arr) cin >> x;
    for(int x: Arr) cout << x << '\n';
    int s = 0;
    for(int i = 1; i<=n;i++) {
        while(i > Arr[s]) s++;
        cout <<Arr[s]-i << '\n';
    }

    return 0;
}
