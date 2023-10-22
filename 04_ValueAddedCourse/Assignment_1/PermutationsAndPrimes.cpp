#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using namespace :: std;
#define size 200000

bool Arr[size];

void BFS(int x) {
    if(!Arr[x]) return;
    for(int j = 2; j*x < size; j++) Arr[x*j]= false;
}

void SieveOfEratothenis(){
    fill_n(Arr, size, true);
    Arr[0] = false; Arr[1] = false;
    for(int i = 2; i < size; i++) BFS(i);
}

int main(void) {
    SieveOfEratothenis();
    int test, n;
    cin >> test;
    for(int _ = 0; _ < test; _++) {
        cin >> n;
        list<int> V = {1};
        int i = 2;
        bool flag = true;
        while(i <= n) {
            if(flag && !Arr[i]){V.push_back(i); flag = !flag;}
            else if(!flag && !Arr[i]){V.push_front(i); flag = !flag;}
            i++;
        }
        i = 2;
        while(i <= n) {
            if(flag && Arr[i]){V.push_back(i); flag = !flag;}
            else if(!flag && Arr[i]){V.push_front(i); flag = !flag;}
            i++;
        }

        for(int x: V) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}
