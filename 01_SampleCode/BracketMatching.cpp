#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace :: std;

int main(void) {
    stack<char> S;
    string Brackets;
    cin >> Brackets;
    for(char x: Brackets) {
        if(S.empty()){S.push(x);}
        else{
            if(x == ')' && S.top() == '(') S.pop();
            else if (x == '}' && S.top() == '{') S.pop();
            else if (x == ']' && S.top() == '[') S.pop();
            else S.push(x);
        }
    }
    if (S.empty()) {
        cout << "YES\n"; 
    }
    else {
        cout << "NO\n";
    }
    return 0;
}
