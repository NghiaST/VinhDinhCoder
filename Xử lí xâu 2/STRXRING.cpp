#include <iostream>
#include <cstring>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 10005
using namespace std;
int n, q, a[N], f[N];
char s[N];

int main() {
    int l, r, k, range;
    scanf("%s%d", &s, &q);
    n = strlen(s);
    FOR(i, 1, n) a[i] = i;
    while (q--) {
        scanf("%d%d%d", &l, &r, &k);
        range = r - l + 1;
        k %= range;
        FOR(i, l, r) f[i] = a[(i - k - l + range)%range + l];
        FOR(i, l, r) a[i] = f[i];
    }
    FOR(i, 1, n) cout << s[a[i]-1];
}
    
