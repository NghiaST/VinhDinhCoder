#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 1000005
using namespace std;
int n, k, a[N], vmax;
long long sum;

void ReadInt(int &x) {
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
}

void Enter() {
    ReadInt(n);
    ReadInt(k);
    FOR(i, 1, n) ReadInt(a[i]), sum += a[i], vmax = max(a[i], vmax);
}

bool check(long long x) {
    long long pos = 1, cnt = 0;
    FOR(i, 1, n) {
        if (cnt + a[i] > x) pos++, cnt = 0;
        cnt += a[i];
    }
    return pos <= k;
}

void Process() {
    long long l = vmax, r = sum, mid;
    while (l < r) {
        mid = (l + r) / 2;
        if (check(mid)) r = mid; else l = mid + 1;
    }
    cout << l;
}

int main() {
    Enter();
    Process();
}
    
