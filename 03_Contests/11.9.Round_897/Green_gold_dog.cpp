#include<bits/stdc++.h>
using namespace :: std;


int main(void) {
    int t, n, q; cin >> t;
    for (int i_ = 0; i_ < t; i_++)
    {
        cin >> n;
        // Rank Finding Alorithm
        vector<pair<int, int>> V(n), V_copy(n);
        vector<int> M(n);
        for(int i = 0; i < n; i++) {
            cin >> q;
            V[i] = {q, i};
            V_copy[i] = {q, i};
        }

        sort(V_copy.begin(), V_copy.end());

        for(int i = 0; i < n; i++) {
            M[V_copy[i].second] = n - i;
        }

        for(int x: M) cout << x << ' ';

        cout << endl;

    }
    
    return 0;
}