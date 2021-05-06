#include <iostream>
using namespace std;
int n, m, a[1005], avail[1005];

void ReadInt(int &x) {
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
}

void check(int pos, int sum) {
    if (avail[sum]) return;
    avail[sum] = true;
    for(int i=pos+1; i<=n; i++) check(i, (sum + a[i])%m);
}

int main()
{
    ReadInt(n);
    ReadInt(m);
    if (n >= m) { cout << "YES\n"; return 0; }
    for(int i=1; i<=n; i++) ReadInt(a[i]), a[i] %= m;
    for(int i=1; i<=n; i++) check(i, a[i]);
    cout << (avail[0] ? "YES" : "NO");
}
    
