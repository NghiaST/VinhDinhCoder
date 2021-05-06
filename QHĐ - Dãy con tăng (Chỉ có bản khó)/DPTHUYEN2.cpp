#include <iostream>
#include <algorithm>
using namespace std;
int n, r, p, Q[100005];
struct Data{
    int x, y;
    bool operator < (Data &other) { return x < other.x || x == other.x && y < other.y; }
} a[100005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i].x >> a[i].y;
    sort(a+1, a+n+1);
    for(int i=1; i<=n; i++) {
        if (!r || Q[r] <= a[i].y) Q[++r] = a[i].y;
        else *upper_bound(Q+1, Q+r, a[i].y) = a[i].y;
    }
    cout << n-r;
}
    
