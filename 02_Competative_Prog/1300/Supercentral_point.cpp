#include<bits/stdc++.h>
using namespace ::std;

int main(void) {
    int n; cin >> n;
    vector<pair<int, int>> V(n);
    unordered_map<int, pair<int, int>> M_h;
    unordered_map<int, pair<int, int>> M_v;
    
    for(auto &x: V) {
        cin >> x.first >> x.second;
        if(M_h.find(x.second) != M_h.end()) {
            // Update if neccessary
            if (x.first < M_h[x.second].first) M_h[x.second].first = x.first;
            if (x.first > M_h[x.second].second) M_h[x.second].second = x.first;
        }
        else {
            M_h[x.second] = {x.first, x.first};
        }

        if(M_v.find(x.first) != M_v.end()) {
            // Update if neccessary
            if (x.second < M_v[x.first].first) M_v[x.first].first = x.second;
            if (x.second > M_v[x.first].second) M_v[x.first].second = x.second;
        }
        else {
            M_v[x.first] = {x.second, x.second};
        }
    }

    int c = 0;
    for(auto x: V) {
        if(x.first > M_h[x.second].first && x.first < M_h[x.second].second && 
            x.second > M_v[x.first].first && x.second < M_h[x.first].second) c++;
    }

    cout << c << endl;

    return 0;
}