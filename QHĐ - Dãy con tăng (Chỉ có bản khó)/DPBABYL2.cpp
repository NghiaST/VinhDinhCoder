#include <iostream>
#include <algorithm>
using namespace std;
int n, cnt, b[50005];
long long f[50005];
pair<int,int> d[50005];
struct Data{
    int x,y,z;
    bool operator < (Data &other) { return x>other.x || x==other.x && y<other.y; }
} a[50005];

void Enter() {
    n*=3;
    int x1, x2, x3;
    for(int i=1; i<=n; i+=3) {
        cin >> x1 >> x2 >> x3;
        if (x1 > x2) swap(x1,x2);
        if (x2 > x3) swap(x2,x3);
        if (x1 > x2) swap(x1,x2);
        d[i] = {x1,i};
        d[i+1] = {x2,i+1};
        d[i+2] = {x3,i+2};
        a[i].z = x3;
        a[i+1].z = x2;
        a[i+2].z = x1;
    }
    sort(d+1, d+n+1);
    cnt = 0;
    for(int i=1; i<=n; i++) {
        if (d[i].first != d[i-1].first) ++cnt;
        b[d[i].second] = cnt;
    }
    for(int i=1; i<=n; i+=3) {
        a[i].x = a[i+1].x = b[i];
        a[i].y = a[i+2].x = b[i+1];
        a[i+1].y = a[i+2].y = b[i+2];
    }
    sort(a+1, a+n+1);
}

long long getBIT(int x) {
    long long val = 0;
    for(; x<=cnt; x+=x&-x) val = max(val, f[x]);
    return val;
}

void update(int x, long long val) {
    for(--x; x; x-=x&-x) f[x] = max(f[x], val);
}

void Process() {
    long long res = 0, vv;
    fill(f, f+cnt+1, 0);
    for(int i=1; i<=n; i++) {
        vv = getBIT(a[i].y) + a[i].z;
        update(a[i].y, vv);
        res = max(res, vv);
    }
    cout << res << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while (cin >> n, n!=0) {
        Enter();
        Process();
    }
}
    
