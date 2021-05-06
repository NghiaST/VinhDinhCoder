#include <iostream>
#define N 100005
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
long long n, m, k, f[N], f1[N], f2[N];
long long La, Ra, Va, Lb, Rb, Vb;

struct Data{ long long l, r, val; } a[N];

void ReadInt(long long &x) {
    char c = getchar();
    while (!isdigit(c) && c != '-') c = getchar();
    long long deg = 1;
    if (c == '-') deg = -1, c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
    x *= deg;
}

int main() {
    long long Type, L, R;
    ReadInt(n); ReadInt(m); ReadInt(k);
    FOR(i, 1, n) ReadInt(f[i]);
    FOR(i, 1, m) {
        ReadInt(Type); ReadInt(a[i].l); ReadInt(a[i].r); ReadInt(a[i].val);
        if (Type == 2) a[i].val = -a[i].val;
    }
    FOR(i, 1, k) {
        ReadInt(Type); ReadInt(L); ReadInt(R);
        f1[L]++;
        f1[R+1]--;
    }
///
    long long cnt = 0;
    FOR(i, 1, m) {
        cnt += f1[i];
        f2[a[i].l] += a[i].val * cnt;
        f2[a[i].r + 1] -= a[i].val * cnt;
    }
    cnt = 0;
    FOR(i, 1, n) {
        cnt += f2[i];
        f[i] += cnt + f[i-1];
    }
///
    ReadInt(La); ReadInt(Ra); ReadInt(Va);
    ReadInt(Lb); ReadInt(Rb); ReadInt(Vb);
    Va = abs(f[Ra] - f[La-1] - Va);
    Vb = abs(f[Rb] - f[Lb-1] - Vb);
    if (Va == Vb) cout << "HOA";
    else if (Va < Vb) cout << "SAN WIN";
    else cout << "MI WIN";
}
    
