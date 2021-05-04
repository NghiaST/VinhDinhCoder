#include <iostream>
#include <algorithm>
#include <cstring>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 100005
using namespace std;
int n, t, a[N], pos[N];
int *p[N];

int main() {
    scanf("%d%d", &n, &t);
    FOR(i, 1, n) {
        scanf("%d", &a[i]);
        p[i] = a + i;
    }
    sort(p+1, p+n+1, [] (int* A, int* B) { return *A < *B || *A == *B && A < B; });
    FOR(i, 1, n) pos[p[i] - a] = i;
    cout << pos[t];
}
    
