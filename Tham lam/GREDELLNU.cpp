#include <iostream>
#include <algorithm>
using namespace std;
int n, x, a[2][100005], _size[2];
long long res;
int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &x);
        a[x&1][_size[x&1]++] = x;
    }
    sort(a[0], a[0]+_size[0]);
    sort(a[1], a[1]+_size[1]);
    for(int i=_size[0]-_size[1]-2; i>=0; i--) res += a[0][i];
    for(int i=_size[1]-_size[0]-2; i>=0; i--) res += a[1][i];
    cout << res;
}
    
