#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n, res, f[256];
char s[200005];

int main() {
    scanf("%d%s", &n, &s); n = n*2-2;
    REP(i, 0, n) {
        if (i&1) {
            if (!f[s[i] + 32]--) res++, f[s[i] + 32]++;
        } else f[s[i]]++;
    }
    cout << res;
}
    
