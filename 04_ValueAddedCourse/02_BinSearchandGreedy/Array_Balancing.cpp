#include <bits/stdc++.h>
using namespace :: std;

typedef vector<long long int> vi;

int main(void) {
    long long int test; cin >> test;
    for(long long int _ = 0; _ < test; _++){
        long long int n; cin >> n;
        vi A(n), B(n);

        for(long long int &a: A) cin >> a;
        for(long long int &b: B) cin >> b;

        unsigned long long int r = 0;
        for(long long int i = 1; i < n; i++){
            long long int x = abs(A[i] - A[i-1]) + abs(B[i] - B[i-1]);
            long long int y = abs(B[i] - A[i-1]) + abs(A[i] - B[i-1]);

            if(x > y){
                long long int temp = A[i];
                A[i] = B[i];
                B[i] = temp;
            }
            r += abs(A[i] - A[i-1]) + abs(B[i] - B[i-1]);
        }
        cout << r << endl;
    }
    return 0;
}
