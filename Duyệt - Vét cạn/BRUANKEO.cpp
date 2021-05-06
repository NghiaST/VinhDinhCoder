#include <iostream>
#include <algorithm>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 100005
using namespace std;
int n, a[N], res, r;

int main() {
    scanf("%d", &n);
    REP(i, 0, n) scanf("%d", &a[i]);
    sort(a, a+n);
    r = a[0];
    REP(i, 1, n) {
        if (a[i] <= r) r++, res += r - a[i];
        else r = a[i];
    }
    cout << res;
}
    
