#include <iostream>
#include <algorithm>
using namespace std;
int n, r, p, Q[100005], f[100005], prv[100005];
struct Data{
    int x, y, z;
    bool operator < (Data &other) { return x < other.x || x == other.x && y > other.y; }
} a[100005];

void Print(int x) {
    if (!x) cout << r << '\n';
    else Print(prv[x]), cout << x << ' ';
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    n = 1;
    while (cin >> a[n].x, a[n].x != 0) {
        cin >> a[n].y;
        a[n].z = n;
        n++;
    }
    n--;
    sort(a+1, a+n+1);
    for(int i=1; i<=n; i++) {
        if (!r || Q[r] >= a[i].y) p = ++r;
        else p = upper_bound(Q+1, Q+r, a[i].y, greater<int>()) - Q;
        Q[p] = a[i].y;
        f[p] = a[i].z;
        prv[a[i].z] = f[p-1];
    }
    Print(f[r]);
}
    
