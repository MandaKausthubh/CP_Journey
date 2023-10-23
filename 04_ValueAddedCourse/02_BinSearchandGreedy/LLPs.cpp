#include <bits/stdc++.h>
using namespace :: std;

int main(void){
    string S;
    cin >> S;
    int max_index = 0;
    for(int i = 0; i < S.size(); i++) {if((int)S[i] > (int)S[max_index]){max_index = i;}}
    for(char x: S){
        if(x == S[max_index]){cout << x ;}
    }
    cout << endl;
    return 0;
}
