#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
int n, a[1000005];
long long res;

void ReadInt(int &x) {
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
}

int main() {
    ReadInt(n);
    FOR(i, 1, n) ReadInt(a[i]);
    sort(a + 1, a + n + 1, greater<int>());
    res = a[1];
    FOR(i, 2, n) res += a[i] * (i%4 > 1 ? -1 : 1);
    if (res > 0) cout << "THANG";
    if (res < 0) cout << "THUA";
    if (res == 0) cout << "HOA";
}
    
