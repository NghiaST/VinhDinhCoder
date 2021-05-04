#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 100005
using namespace std;
int m, n, a[N], b[N];

int main() {
    scanf("%d%d", &m, &n);
    FOR(i, 1, m) scanf("%d", &a[i]);
    FOR(i, 1, n) scanf("%d", &b[i]);
    sort(a+1, a+m+1);
    sort(b+1, b+n+1);
    FOR(i,1,m) if (a[i] <= b[i]) { cout << "NO"; return 0; }
    cout << "YES";
}
    
