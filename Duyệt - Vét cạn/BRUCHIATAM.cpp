#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 10005
using namespace std;
char s[N];

int main() {
    scanf("%s", &s);
    int n = strlen(s);
    int res = 1000;
    REP(i, 0, n) if (s[i] == '0' || s[i] == '8') res = min(res, s[i] - '0');
    REP(i, 0, n) REP(j, i+1, n) {
        int val = (s[i] - '0') * 10 + s[j] - '0';
        if (val%8 == 0) res = min(res, val);
    }
    REP(i, 0, n) REP(j, i+1, n) REP(w, j+1, n) {
        int val = (s[i] - '0') * 100 + (s[j] - '0') * 10 + s[w] - '0';
        if (val%8 == 0) res = min(res, val);
    }
    if (res == 1000) cout << "NO";
    else cout << res;
}
    
