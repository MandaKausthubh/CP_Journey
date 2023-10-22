#include<bits/stdc++.h>
using namespace :: std;

int main(void) {
    int t, n, a, b; cin >> t;
    string S;
    for(int i_ = 0; i_ < t; i_++) {
        cin >> n;
        cin >> S;
        vector<int> Ans(n+1);
        a = b = 0;
        for( int i = 0; i < (n/2); i++)
        {
            if(S[i] == S[n-1-i]) a++;
            else b++;
        }

        if(n % 2 == 0) {
            for(int i = 0; i < n+1; i++){
                if(i < b) Ans[i] = 0;
                else{
                    int x = (i - b)/2;
                    if((i-b) % 2 == 0 && x <= a) Ans[i] = 1;
                    else Ans[i] = 0; 
                }
            }
        }
        else {
            for(int i = 0; i < n+1; i++){
                if(i < b) Ans[i] = 0;
                else{
                    // if(((i-b-1)/2 <= a) || ((i-b)/2 <= a)) Ans[i] = 1;
                    // else Ans[i] = 0;
                    if((i-b) % 2 == 0) {
                        int x = (i-b)/2;
                        if(x <= a) Ans[i] = 1;
                        else Ans[i] = 0;
                    }
                    else{
                        int x = (i - b - 1)/2;
                        if(x <= a) Ans[i] = 1;
                        else Ans[i] = 0;
                    }
                }
            }
        }

        for(int X: Ans) cout << X;
        cout << endl;
    }
    return 0;
}