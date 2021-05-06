#include <iostream>
#include <algorithm>
using namespace std;
int n;
struct Data{
    int l, r, p;
    bool operator < (Data &other) {
        if (l != other.l) return l<other.l;
        if (r != other.r) return r>other.r;
        return p<other.p;
    }
} a[300005];
int main()
{
    scanf("%d", &n);
    int x, y;
    for(int i=0; i<n; i++) {
        scanf("%d%d", &x, &y);
        a[i] = {x, y, i+1};
    }
    sort(a, a+n);
    for(int i=1; i<n; i++) {
        if (a[i].r <= a[i-1].r) {
            cout << a[i].p << ' ' << a[i-1].p;
            return 0;
        }
    }
    cout << -1;
}
    
