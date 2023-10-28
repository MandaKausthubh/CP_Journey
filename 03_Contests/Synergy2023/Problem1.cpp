#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace :: std;

int main(void) {
    int n; cin >> n;
    vector<pair<int, int>> V(n);
    int loc;
    for(int i = 0; i < n; i++) {int x; cin >> x; V[i] = {x, i}; if(x == 1) loc = i;}

    int sum = 0;
    sort(V.begin(), V.end());
    for(int i = 0; i < n - 1; i++){sum += abs(V[i].second - V[i+1].second);}

    cout << sum + loc << '\n';


    return 0;
}
