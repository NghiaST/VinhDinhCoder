#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n, f[256], res;
char s[26];

int main()
{
    scanf("%d", &n);
    if (n > 26) { cout << -1; return 0; }
    scanf("%s", &s);
    REP(i, 0, n)
        if (f[s[i]]) res++; else f[s[i]] = true;
    cout << res;
}
