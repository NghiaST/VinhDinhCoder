#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n, cuoi = -1;
char s[2005];

int main() {
    scanf("%s", &s);
    n = strlen(s);
    s[n] = 'z'; s[n+1] = '@';
    if (s[0] == '@' || s[n-1] == '@') { cout <<  "LAMSAOBAYGIO"; return 0; }
    REP(i, 0, n) {
        if (s[i] == '@' && (s[i+1] == '@' || s[i+2] == '@')) {
            cout << "LAMSAOBAYGIO";
            return 0;
        }
        if (s[i] == '@') cuoi = i;
    }
    if (cuoi < 0) { cout << "LAMSAOBAYGIO"; return 0; }
    putchar(s[0]);
    REP(i, 1, n) {
        putchar(s[i]);
        if (s[i-1] == '@' && cuoi + 1 != i) putchar(',');
    }
}
    
