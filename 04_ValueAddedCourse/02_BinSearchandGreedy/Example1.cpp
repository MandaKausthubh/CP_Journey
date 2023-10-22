#include <bits/stdc++.h>
#include <vector>
using namespace :: std;

typedef std::vector<int> vi;

int main(void) {
    int n, target;
    cin >> n >> target;
    vi coins(n);
    for(int &x: coins) cin >> x;
    int i = 0;

    while(target > 0 && i < coins.size()) {
        if(coins[i] > target) i++;
        else{
            cout << coins[i] << ": " << target/coins[i] << endl;
            target %= coins[i];
        }
    }

    if(target != 0) cout << "Not Possible\n";
    return 0;    
}
