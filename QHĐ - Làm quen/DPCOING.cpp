#include <iostream>
using namespace std;
int n, k, l, x, f[1000005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> k >> l >> n;
    f[0] = 1;
    for(int i=1; i<=1000000; i++) {
        if (f[i-1] || i>=k && f[i-k] || i>=l && f[i-l]) f[i] = 0;
        else f[i] = 1;
    }
    while (n--) {
        cin >> x;
        cout << (char) (f[x] + 'A');
    }
}
    
