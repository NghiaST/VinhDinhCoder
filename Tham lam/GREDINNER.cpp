#include <iostream>
using namespace std;
int n, m, x, res;
int main()
{
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++) {
        int vmin = 1e9;
        for(int j=0; j<m; j++) {
            scanf("%d", &x);
            if (vmin > x) vmin = x;
        }
        if (res < vmin) res = vmin;
    }
    cout << res;
}
    
