#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 100005
using namespace std;
int n, k, x, r, a[N];

int main() {
    scanf("%d%d", &n, &k);
    FOR(i, 1, n) {
        scanf("%d", &x);
        if (x == k) a[++r] = i;
    }
    if (!r) cout << "NO"; else cout << r << '\n';
    FOR(i, 1, r) cout << a[i] << ' ';
}
    
