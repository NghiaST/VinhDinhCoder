#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REPD(i, r, l) for(int i=r-1; i>=l; i--)
using namespace std;
int n, vmin, vmax, f[256];
char s[1005];
int main()
{
    scanf("%d", &n);
    while (n--) {
        scanf("%s", &s);
        FOR(i, vmin, vmax) f[i] = 0;
        vmin = vmax = (int) s[0];
        REPD(i, strlen(s), 0) {
            f[s[i]]++;
            vmin = min(vmin, (int) s[i]);
            vmax = max(vmax, (int) s[i]);
        }
        bool ok = true;
        FOR(i, vmin, vmax) if (f[i] != 1) { cout << "No\n"; ok = false; break; }
        if (ok) cout << "Yes\n";
    }
}
    
