#include <bits/stdc++.h>
using namespace :: std;

int greatest_powerof_3(int n) {
    int x = 1;
    //cout << "x";
    while(n % x == 0) {x *= 3;}
    return x / 3;
}

int highest_pow(int n, int k) {
    int x = 0, factor = 1;
    while(n % k == 0) {factor *= k; x += 1;}
    return x - 1;
}

int main(void) {
    int t_, n, m, k1, k2, m_substrate; cin >> t_;
    for(int i = 0; i < t_; i++) {
        cout << "a";
        cin >> n >> m; 
        //cout<<"";cin>> m;
        cout << "2";
        k1 = greatest_powerof_3(n);
        k2 = n / k1;
        cout << "b";
        if(m % k2 == 0 && highest_pow(m, 2) + highest_pow(m, 3) <= highest_pow(n, 3)){ cout << "YES";}
        else cout << "NO";
    }
    return 0;
}