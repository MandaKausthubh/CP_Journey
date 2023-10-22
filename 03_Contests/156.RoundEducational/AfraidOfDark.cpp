#include <cmath>
#include <bits/stdc++.h>
#include <math.h>
using namespace :: std;
int main(void) {
    int test, Px, Py, Ax, Ay, Bx, By; cin >> test;
    for(int _ = 0; _ < test; _++) {
        cin >> Px >> Py;
        cin >> Ax >> Ay;
        cin >> Bx >> By;
        int dAB = (Ax - Bx)*(Ax - Bx) + (Ay - By)*(Ay - By);
        int dAO = (Ax * Ax) + (Ay*Ay);
        int dBO = (Bx*Bx) + By*By;
        int dAP = (Ax - Px)*(Ax - Px) + (Ay - Py)*(Ay - Py);
        int dBP = (Bx - Px)*(Bx - Px) + (By - Py)*(By - Py);
        int dPO = Px*Px + Py*Py;
        if((dBO >= dAO && dAP <= dBP)){
            long double ans = max(sqrtl(dAP), sqrtl(dAO));
        }
        else if((dBO <= dAO && dAP >= dBP)){
            long double ans = max(sqrtl(dBP), sqrtl(dBO));
            cout << ans << '\n';
        }
        else if((dBO <= dAO && dBP >= dAP)){
            long double ans = max(sqrtl(dBO), max(sqrtl(dAP), sqrtl(dAB)/2));
            cout << ans << '\n';
        }
        else if((dBO >= dAO && dBP <= dAP)){
            long double ans = max(sqrtl(dBP), max(sqrtl(dAO), sqrtl(dAB)/2));
            cout << ans << '\n';
        }
        else{}
    }
    return 0;
}
