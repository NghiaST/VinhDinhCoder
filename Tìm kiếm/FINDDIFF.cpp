#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define N 100005
using namespace std;
int n;
long long a[N], k;

void Enter() {
    scanf("%d%lld", &n, &k);
    FOR(i, 1, n) scanf("%lld", &a[i]);
    sort(a+1, a+n+1);
}

void Process() {
    int l = a[1], r = a[n], cntl = 1, cntr = n;
    long long Inc, Dec;
    while (l < r && (k >= cntl || k >= n - cntr + 1)) {
        if (cntl < (n - cntr + 1)) {
            Inc = min(k / cntl, a[cntl + 1] - a[cntl]);
            l += Inc;
            k -= Inc * cntl++;
        } else {
            Dec = min(k / (n - cntr + 1), (a[cntr] - a[cntr - 1]));
            r -= Dec;
            k -= Dec * (n - cntr-- + 1);
        }
    }
    cout << r - l;
}

int main() {
    Enter();
    Process();
}
    
