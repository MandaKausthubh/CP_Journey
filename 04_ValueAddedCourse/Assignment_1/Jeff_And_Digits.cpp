#include <bits/stdc++.h>
using namespace :: std;

int main(void) {
    int n, z = 0, f = 0;
    int q;
    string Ans = "";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> q;
        if(q == 5) f ++;
        else z++;
    }
    if(z == 0) cout << -1;
    else{
        if(f >= 9) {
            for(int j = 0; j < f - (f%9); j++) Ans.insert(0,"5");
            for(int j = 0; j < z; j++) Ans.append("0");
        }
        else{
            Ans = "0";
        }
        cout << Ans << '\n';
    }

    return 0;
}