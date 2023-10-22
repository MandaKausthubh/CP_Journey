#include <bits/stdc++.h>
#include <unordered_map>
using namespace :: std;

int main(void) {
    int test; cin >> test;
    for(int _ = 0; _ < test; _ ++){
        int n, k;
        cin >> n >> k;
        string s; cin >> s;
        unordered_map<char, int> U;
        for(char x: s){
            if(U.find(x) == U.end()){U[x] = 1;}
            else U[x]++;
        }
        int odd = 0, even = 0;
        for(auto x: U){
            if(x.second % 2 == 1) odd++;
            else even++;
        }

        if(odd - 1 > k) cout << "NO\n";
        else{
            if(odd == k || odd - 1 == k) cout << "YES\n";
            else if(odd < k){
                even += odd;
                for(auto x: U){
                    if(x.second % 2) {x.second -= 1; k--; if(k == 0){break;}}
                }
            }
        }
    }
    return 0;
}
