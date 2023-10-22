#include<bits/stdc++.h>
using namespace :: std;

int main(void) {
    long long int n, m, q, a = 0, b = 0;
    cin >> n;
    vector<long long int> V(n);

    //Inverse Map
    for(long long int i = 0; i < n; i++) {
        cin >> q;
        V[q-1] = i;
    }

    cin >> m;

    for(long long int i = 0; i < m; i++)
    {
        cin >> q;
        a += V[q-1] + 1; b += n - V[q-1];
    }

    cout << a << ' ' << b << endl;
    return 0;
}