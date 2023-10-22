#include <bits/stdc++.h>
using namespace  :: std;

int main(void) {
    //Ski resort;
    long long int test, n, k, q; cin >> test;
    long long int cost, count;
    for(int _ = 0; _ < test; _++) {
        cin >> n >> k >> q;
        vector<int> V(n);
        for(int &x: V) cin >> x;
        int i = 0, j = 0;
        count = 0;
        cost = 0;

        while(i < n && j < n) {
            if(V[j] <= q){
                if(j-i+1 >= k) {
                    //for(int x = i; x <= j; x++) cout << V[x] << ' ';
                    //cout << '\n';
                    count += (j-i+1) - k + 1;
                }
                j++;
            }
            if(V[j] > q) {
                j++;
                i = j;
                cost += count;
                count = 0;
            }
        }
        cost += count;

        cout << cost << '\n';
    }
    return 0;
}