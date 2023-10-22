#include <bits/stdc++.h>
#include <string>
using namespace :: std;

int main(void) {
    int n, ans = -1;
    cin >> n;
    string S;
    cin >> S;
    

    for(int i = 0; i < S.size()-2; i++){
        if(S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C'){ans = i+1; break;}
    }

    cout << ans << '\n';

    return 0;
}
