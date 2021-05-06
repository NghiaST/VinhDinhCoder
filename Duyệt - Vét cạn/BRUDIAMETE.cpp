#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 105
using namespace std;

int n, k, a[N];

void Enter() {
    scanf("%d%d", &n, &k);
    FOR(i, 1, n) scanf("%d", &a[i]);
    sort(a+1, a+n+1);
}

void Process() {
    int res = 0, l = 1;
    FOR(i, 1, n) {
        while (a[i] - a[l] > k) l++;
        res = max(res, i - l + 1);
    }
    cout << n - res;
}

int main() {
    Enter();
    Process();
}
    
