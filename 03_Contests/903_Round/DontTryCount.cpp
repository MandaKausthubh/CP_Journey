#include <iostream>
using namespace ::std;

// How I intend to solve it:
// I basically try to iterate over the two strings in`
// x and s and every with indexes j and m

int main(void) {
    int test; cin >> test;
    for(int _=0; _< test; _++){
        int n, m; cin >> n >> m;
        string x, s;
        cin >> x >> s;
        
        int i = 0, j = 0; // Indexes of X and S;
        int count = 0, y = n, mul = 0;
        while(y <= 25)  // Iterate over the string.
        {
            if(s[j] == x[i]){
                j++;             
                if(j==m) break;
            }
            else j = 0;
            i++;
            if(i == n){
                i = 0; mul++;
                if(mul == y) y*=2;
                count++;
            }
        }
        if(j == m) cout << count << '\n';
        else cout << -1 << '\n';
    }
}
