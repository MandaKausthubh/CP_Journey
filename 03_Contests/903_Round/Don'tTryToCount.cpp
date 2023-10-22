#include <iostream>
#include <string>
using namespace :: std;

int main(void) {
    int test; cin >> test;
    for(int _ = 0; _ < test; _++)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int count = 0, j = 0, i = 0, y = n, mult = 0, cross = 0;
        if(n <= m){
            while(j < m && (y <= 2*m)){
                if(s[j] == x[i]){j++;}
                else j = 0;
                i++;
                if(i == n){
                    i = 0; mult++;
                    if(mult*n == y){
                        count++;
                        //mult = 0;
                        y *= 2;
                        if(y >= m) cross++;
                    }
                }
                cout << i << " " << j << " " << count << " " << mult << " " << y << '\n';
            }
        }
        else{
            while(j < m && cross != 2){
                if(s[j] == x[i]){j++;}
                else j = 0;
                i++;
                if(i == n){
                    i = 0; mult++;
                    if(mult*n == y){
                        count++;
                        //mult = 0;
                        y *= 2;
                        if(y >= m) cross++;
                    }
                }
                cout << i << " " << j << " " << count << " " << mult << " " << y << '\n';
            }
        }
        if(j == m){cout << count << '\n';}
        else cout << "-1\n";
    }
    return 0;
}
