#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n, cnt, val;
char s[1000005];

int main() {
    scanf("%d%s", &n, &s);
    if (n&1) { cout << ":("; return 0; }
    cnt = n / 2;
    REP(i, 0, n) {
        if (s[i] == '(') cnt--;
    }
    REP(i, 0, n) {
        if (s[i] == '?') {
            if (cnt > 0) s[i] = '(', cnt--;
            else s[i] = ')';
        }
        if (s[i] == '(') val++; else val--;
        if (val < 0 || val == 0 && i != n-1) {
            cout << ":(";
            return 0;
        }
    }
    if (val) { cout << ":("; return 0; }
    REP(i, 0, n) cout << s[i];
}
    
