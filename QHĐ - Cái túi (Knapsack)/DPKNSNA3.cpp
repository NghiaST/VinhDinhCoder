#include <iostream>
#include <vector>
using namespace std;
int m1, m2, n, v, w, f[205][205];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin >> m1 >> m2 >> n;
    while (n--) {
        cin >> v >> w;
        for(int i=m1; i>=0; i--)
        for(int j=m2; j>=0; j--) {
            if (i<w && j<w) continue;
            int val = 0;
            if (i>=w) val = f[i-w][j] + v;
            if (j>=w) val = max(val, f[i][j-w] + v);
            f[i][j] = max(f[i][j], val);
        }
    }
    cout << f[m1][m2];
}
    
