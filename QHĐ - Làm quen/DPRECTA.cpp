#include <iostream>
using namespace std;
int n, x[10005], y[10005];
long long fx, fy, tfx, tfy;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> x[i] >> y[i];
    fx = y[1]; fy = x[1];
    for(int i=2; i<=n; i++) {
        tfx = max(fx + abs(x[i] - x[i-1]) + y[i], fy + abs(x[i] - y[i-1]) + y[i]);
        tfy = max(fy + abs(y[i] - y[i-1]) + x[i], fx + abs(y[i] - x[i-1]) + x[i]);
        fx = tfx;
        fy = tfy;
    }
    cout << max(fx, fy);
}
    
