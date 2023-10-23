#include <algorithm>
#include <bits/stdc++.h>
#include <tuple>
#include <vector>
using namespace :: std;

typedef vector<pair<int, int>> vi;

int main(void) {
    long long int s, n;
    cin >> s >> n;
    vi X(n) ;
    for(int i = 0; i < n; i++){cin >> X[i].first; cin >> X[i].second;}
    sort(X.begin(), X.end());
    int i = 0;
    while(i < n) {
        if(s <= X[i].first){break;}
        else{
            s += X[i].second;i++;
        }
    }

    if(i == n){cout << "YES\n";}
    else {cout << "NO\n";}

    return 0;
}
