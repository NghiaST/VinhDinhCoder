#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define N 1000005
using namespace std;
int n, a[N], l, r;
int main()
{
    FOR(i,2,1000000) if (!a[i]) FOR(j,i,1000000/i) a[i*j] = true;
    FOR(i,2,1000000) a[i] = a[i-1] + (a[i] ^ 1);
    cin >> n;
    while (n--) {
        cin >> l >> r;
        cout << a[r] - a[l-1] << '\n';
    }
}
    
