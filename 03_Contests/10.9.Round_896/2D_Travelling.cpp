#include<bits/stdc++.h>
using namespace :: std;
const long long int inf = 1e10;

struct Node {
    long long int x, y;
    bool majour, flag;
    long long int dist;
    Node(long long int a,long long int b, bool t){
        x = a; y = b; majour = t; dist = inf; flag = true;
    }
};

long long int distance(Node* a, Node* b) {
    if(a->majour && b->majour) return 0;
    else {
        return abs(a->x - b->x) + abs(a->y - b->y);
    }
}

void Djikstras(long long int n, vector<Node*> arr, long long int start) {
    auto comparator = [] (Node* &a, Node* &b) {return a->dist >= b->dist;};
    arr[start] -> dist = 0;
    priority_queue<Node*, vector<Node*>, decltype(comparator)> PQ(comparator);
    PQ.push(arr[start]);
    Node* temp;
    while(!PQ.empty()) {
        temp = PQ.top();
        PQ.pop();
        for(auto x: arr) {
            if(x -> flag) {
                PQ.push(x);
                x -> flag = false;
            }
            x -> dist = min(x->dist, distance(x, temp)+temp->dist);
        }
    }
}

int main(void) {
    //Using Djikstras Algorithm;

    long long int t; cin >> t;
    for(long long int i_ = 0; i_ < t; i_++) {
        long long int n, k, a, b;
        long long int x, y;
        cin >> n >> k >> a >> b;
        vector<Node*> arr(n);
        for(long long int i = 0; i < n; i++) {
            if(i < k){
                cin >> x >> y;
                arr[i] = new Node(x, y, true);
            }
            else {
                cin >> x >> y;
                arr[i] = new Node(x, y, false);
            }
        }
        Djikstras(n, arr, a-1);
        cout << arr[b-1] -> dist << " ";
        //cout << arr[a-1]->x << ' ' << arr[a-1]->y << '\t' << arr[b-1]->x << ' ' << arr[b-1]->y;
    }
    cout << endl;
    return 0;
}