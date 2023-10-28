#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <stack>
#include <string>
using namespace :: std;

int main(void){
    int test; cin >> test;
    for(int _ = 0; _ < test; _++) {
        string str;
        cin >> str;
        int a = 0, b = 0;
        stack<char> S;
        for(char C: str){
            if(S.empty()){S.push(C);}
            else {
                if(C == 'A') S.push(C);
                if(C == 'B') S.pop();
            }
        }
        cout << S.size() << endl;
    } 
    return 0;
}


