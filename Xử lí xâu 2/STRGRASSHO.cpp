#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int n, k, dau, cuoi;
char s[105];

int main()
{
    scanf("%d%d%s", &n, &k, &s);
    n = strlen(s);
    REP(i, 0, n) {
        if (s[i] == 'G') dau = i;
        if (s[i] == 'T') cuoi = i;
    }
    if (dau > cuoi) swap(dau, cuoi);
    for(; dau < cuoi; dau += k) if (s[dau] == '#') break;
    cout << (dau == cuoi ? "YES" : "NO");
}
    
