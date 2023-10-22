#include <bits/stdc++.h>
#include <string>
using namespace ::std;



int main(void) {
    long long int n, m;
    string S, T;
    cin >> n >> m;
    cin >> S >> T;
    bool Suffix = true, Prefix = true;
    for(long long int i = 0; i < n; i++){
        if(S[i] != T[i]){ Prefix = false; break;}
    }
    for(int i = 0; i < n; i++){
        //cout << S[n-1-i] << ' ' << T[m-i-1] << '\n';
        if(S[n-1-i] != T[m - i - 1]){ Suffix = false; break;}
    }

    if(Prefix && Suffix) cout << 0 << '\n';
    else if (Prefix) cout << 1<< '\n';
    else if (Suffix) cout << 2 << '\n';
    else cout << 3 << '\n';

    return 0;
}
