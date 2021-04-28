#include <bits/stdc++.h>
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, m, q, nhan;
long double r, res;
char s[100005], s2[100005];
int main()
{
    scanf("%d\n", &n);
    while(n--) {
        gets(s);
        q = strlen(s); q--;
        r = 0; nhan = 1;
        while(s[q] != '.') r = r/10 + s[q--] - '0';
        q--; r/=10;
        while (s[q] != ' ') r += nhan * (s[q--] - '0'), nhan *= 10;
        if (res < r) {
            REP(i, 0, q) s2[i] = s[i];
            m = q;
            res = r;
        }
    }
    REP(i,0,m) putchar(s2[i]);
}
    
