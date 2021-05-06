#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 200005
using namespace std;
int n;
pair<int, int> f[N];

void ReadInt(int &x) {
    char c = getchar();
    while (!isdigit(c) && c != '-') c = getchar();
    int deg = 1;
    if (c == '-') deg = -1, c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
    x *= deg;
}

void Enter() {
    int l, r, res = 0;
    ReadInt(n);
    FOR(i, 1, n) {
        ReadInt(l);
        ReadInt(r);
        f[i*2 - 1] = make_pair(l, 0);
        f[i*2] = make_pair(r, 1);
    }
    sort(f+1, f+n*2+1);
}

void Process() {
    int res = 0, cnt = 0;
    FOR(i, 1, n*2) {
        if (f[i].second) cnt--; else cnt++;
        res = max(res, cnt);
    }
    FOR(i, 1, n*2) {
        if (f[i].second) cnt--; else cnt++;
        if (cnt == res) {
            FOR(j, f[i].first, f[i+1].first) cout << j << ' ';
        }
    }
}

int main() {
    Enter();
    Process();
}
    
