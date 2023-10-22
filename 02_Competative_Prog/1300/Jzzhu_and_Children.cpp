#include<bits/stdc++.h>
using namespace :: std;

int main(void) {
    int n, m, max = -1, index = 0, q;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> q;
        if( q % m != 0 and (q/m) + 1 >= max ) {index = i; max = (q/m) + 1;}
        else if(( q % m == 0 and (q/m) >= max )) {index = i; max = (q/m);}
    }
    cout << index + 1 << endl;
    return 0;
}