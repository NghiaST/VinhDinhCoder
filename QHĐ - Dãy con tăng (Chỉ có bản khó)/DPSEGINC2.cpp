#include <iostream>
using namespace std;

int n, u, f[200005], cc[200005], res, cuoi, val[200005];

void print(int dd) {
    if (cc[dd]) print(cc[dd]);
    cout << dd << ' ';
}

int main()
{
    scanf("%d", &n);
    for(int j=1; j<=n; j++) {
        scanf("%d",&u);
        for(int i=1; i*i<=u; i++) if (u%i == 0) {
            if (f[u] < f[u/i] || i == 1 && f[u] != 0) cc[j] = val[u/i], f[u] = f[u/i];
            if (f[u] < f[i]) cc[j] = val[i], f[u] = f[i];
        }
        val[u] = j;
        f[u]++; if (res < f[u]) res = f[u], cuoi = j;
    }
    cout << res << '\n';
    print(cuoi);
}
    
