#include <algorithm>
#include <bits/stdc++.h>
using namespace :: std;

int main(void) {
    long long int test, k, time, a, b, n, sum; 
    int Arr[101];
    cin >> test;
    for(int t_ = 0; t_ < test; t_ ++) {
        cin >> a >> b >> n;
        time = 0;
        for(int i = 0; i < n; i++) cin >> Arr[i];
        //sort(Arr, Arr+n);
        k = 0;
        while(b > 0) {
            sum = 0;
            // First we need to add the sum
            while(sum < a-b && k < n) sum += Arr[k++];
            if(sum > a-b) sum -= Arr[--k];
            b += sum;
            // IF we are at the last second and we still have something just throw it at int
            if(sum == 0 && b == 1 && k < n) {b = a; k++;}

            b -= 1;
            time ++;
        }
        cout << time << '\n';
    }
    return 0;
}

