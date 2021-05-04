#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 100005
using namespace std;
int n, k, a[N], res;

void Enter() {
    scanf("%d%d", &n, &k);
    FOR(i, 1, n) scanf("%d", &a[i]);
    sort(a+1, a+n+1);
}

void Process() {
    int pos = n;
    FOR(i, 1, n) {
        while (pos && a[i] + a[pos] > k) pos--;
        if (pos && i != pos) res = max(res, a[i] + a[pos]);
    }
    cout << res;
}

int main() {
    Enter();
    Process();
}
    
