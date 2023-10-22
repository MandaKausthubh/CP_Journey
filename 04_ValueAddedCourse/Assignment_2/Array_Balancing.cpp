#include <bits/stdc++.h>
using namespace :: std;

typedef vector<int> vi;

int main(void) {
    int test; cin >> test;
    for(int _ = 0; _ < test; _++){
        int n; cin >> n;
        vi A(n), B(n);

        for(int &a: A) cin >> a;
        for(int &b: B) cin >> b;

        unsigned long int r = 0;
        for(int i = 1; i < n; i++){
            int x = abs(A[i] - A[i-1]) + abs(B[i] - B[i-1]);
            int y = abs(B[i] - A[i-1]) + abs(A[i] - B[i-1]);

            if(x > y){
                int temp = A[i];
                A[i] = B[i];
                B[i] = temp;
            }
            r += abs(A[i] - A[i-1]) + abs(B[i] - B[i-1]);
        }
        cout << r << endl;
    }
    return 0;
}
