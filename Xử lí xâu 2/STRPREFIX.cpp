#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n, v, p, d;
char s[200005];
int main()
{
    scanf("%d%s", &n, &s); if (n&1) n--, d = 1;
    for(int i=0; i<n; i+=2) {
        if (s[i] != s[i+1]) continue;
        if (s[i] == 'a') s[i+1] = 'b'; else s[i] = 'a';
        v++;
    }
    cout << v << '\n';
    REP(i, 0, n+d) putchar(s[i]);
}
    
