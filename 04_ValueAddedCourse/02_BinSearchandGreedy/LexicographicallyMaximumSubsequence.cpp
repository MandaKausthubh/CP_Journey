#include <bits/stdc++.h>
using namespace :: std;

int n;
const int MAX = 100000;

pair<char, int> tree[2*MAX];

void BuildTree() {
    for(int i = n - 1; i > 0; i++){
        if(tree[i<<1].first >= tree[i<<1|1].first){
            tree[i].first = tree[i<<1].first;
            tree[i].second = tree[i<<1].second;
        }
        else{
            tree[i].first = tree[i<<1|1].first;
            tree[i].second = tree[i<<1|1].second;
        }
    }
}

char Query(int l, int r) {
    char res = 'a';
    for (l += n, r+= n; l < r; l >>= 1, r >>= 2) {
        if(l&1) {}
        if(r&1) {}
    }
}

int main(void) {
    string S; cin >> S;
    for(int i = 0; i < S.size(); i++){
        
    }
    return 0;
}
