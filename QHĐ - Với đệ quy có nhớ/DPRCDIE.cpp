#include <iostream>
using namespace std;
int t, a, b, f[1005][2005][2], avail[1005][2005][2], res;

int get_times(int u, int v, int type_envi) {
    if (u <= 0 || v <= 0) return -1;
    if (avail[u][v][type_envi]) return f[u][v][type_envi];
    avail[u][v][type_envi] = true;
    if (type_envi) return f[u][v][type_envi] = get_times(u + 3, v + 2, 0) + 1;
    return f[u][v][type_envi] = max(get_times(u-5, v-10, 1), get_times(u-20, v+5, 1)) + 1;
}

int main()
{
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &a, &b);
        cout << get_times(a, b, 1) << '\n';
    }
}
    
