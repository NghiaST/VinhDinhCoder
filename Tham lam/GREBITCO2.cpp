#include <iostream>
using namespace std;
int n, k, val, x, res;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    while (n--) {
        cin >> x;
        if (x < val) {
            if (val-x > res) res = val-x;
            val = val-k;
        }
        else val = x-k;
    }
    cout << res;
}
    
