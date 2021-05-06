#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int t, n, f[256];
char s1[105], s2[105];

int main()
{
    scanf("%d", &t);
    while (t--) {
        fill(f + 'A', f + 'z' + 1, 0);
        scanf("%s%s", &s1, &s2);
        n = strlen(s1);
        bool ok = false;
        REP(i, 0, n) f[s1[i]] = true;
        REP(i, 0, n) if (f[s2[i]]) ok = true;
        cout << (ok ? "YES\n" : "NO\n");
    }
}
    
