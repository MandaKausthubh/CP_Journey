#include <iostream>
#include <vector>
using namespace :: std;

typedef vector<int> vi;

int main(void) {
    long long int sum, test, n, k;
    cin >> test;
    for(int _ = 0; _ < test; _++) {
        sum = 0;
        cin >> n >> k;
        vi V(n);
        for(int &x: V) {cin >> x; sum += x;}
        
        int target = sum + k;
        cout << sum + k << ' ' ;
        bool flag = false;
        for(int x: V) {if(2*x == target) {flag = true; break;}}
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


