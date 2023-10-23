#include <iostream>
using namespace :: std;

int main(void) {
    int test; cin >> test;
    for(int _ = 0; _ < test; _++){
        string S;
        cin >> S;
        int i = 0;
        while(i < S.size() - 1){
            if(S[i] == 'A' && S[i+1] == 'B') S.erase(i, 2);
        }
        i = 0;
        while(i < S.size() - 1){
            if(S[i] == 'B' && S[i+1] == 'B') S.erase(i, 2);
        }

    }
    
    return 0;
}
