#include <iostream>
#define getBIT(x,i) ((x>>(i))&1)
#define setBIT(x,i) (x|(1ll<<(i)))
using namespace std;
int n, k, R, m, res;
long long Fval1[25], Fval2[25];

struct Data{
    int x, y, s;
} a[25], b[105];

void Enter() {
    scanf("%d%d", &k, &R); R *= R;
    scanf("%d", &m);
    for(int i=0; i<m; i++) scanf("%d%d", &a[i].x, &a[i].y);
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d%d%d", &b[i].x, &b[i].y, &b[i].s);
}

int dist(Data A, Data B) { return (A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y); }

void Init() {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n && j<50; j++)
            if (dist(a[i], b[j]) <= R)
            Fval1[i] = setBIT(Fval1[i], j);
        for(int j=50; j<n; j++)
            if (dist(a[i], b[j]) <= R)
            Fval2[i] = setBIT(Fval2[i], j-50);
    }
}

void dp(int x, int cnt, long long val1, long long val2) {
    if (x == m || cnt == k) {
        int _count = 0;
        for(int i=0; i<50 && i<n; i++) if (getBIT(val1,i)) _count += b[i].s;
        for(int i=50; i<n; i++) if (getBIT(val2,i-50))
            _count += b[i].s;
        res = max(res, _count);
        return;
    }
    if (cnt < k) dp(x+1, cnt+1, val1 | Fval1[x], val2 | Fval2[x]);
    if (k - cnt < m - x) dp(x+1, cnt, val1, val2);
}

int main()
{
    Enter();
    Init();
    dp(0,0,0,0);
    cout << res;
}
    
