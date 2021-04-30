#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
long long n, a[1000005], res = -2e14;

void ReadInt(long long &x) {
    char c = getchar();
    while (!isdigit(c) && c != '-') c = getchar();
    long long deg = 1;
    if (c == '-') deg = -1, c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
    x = x*deg;
}

int main()
{
    ReadInt(n);
    FOR(i, 1, n) ReadInt(a[i]);
    REP(i,2,n) res = max(res, min(a[i], min(a[i-1], a[i+1])));
    cout << res;
}
    
