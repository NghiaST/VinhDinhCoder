#include <iostream>
#define FOR(i, l, r) for(long long i=l; i<=r; i++)
using namespace std;
long long n, m, a[100005], l, r;

void ReadInt(long long &x) {
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
}

void WriteInt(long long x) {
    if (x > 9) WriteInt(x/10);
    putchar(x%10 + 48);
}

int main() {
    ReadInt(n);
    ReadInt(m);
    FOR(i, 1, n) ReadInt(a[i]), a[i] += a[i-1];
    while (m--) {
        ReadInt(l);
        ReadInt(r);
        WriteInt(a[r] - a[l-1]);
        putchar('\n');
    }
}
    
