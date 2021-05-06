#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 105
using namespace std;
int t,n, k, avail[N][N];
long long f[N][N];

int get_val(int cnt, int paradox) {
    if (!cnt) return paradox == 0;
    if (avail[cnt][paradox]) return f[cnt][paradox];
    avail[cnt][paradox] = true;
    FOR(i, 0, min(cnt-1, paradox)) f[cnt][paradox] += get_val(cnt-1, paradox - i);
    return f[cnt][paradox];
}

int main()
{
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &k);
        cout << get_val(n, k) << '\n';
    }
}
    
