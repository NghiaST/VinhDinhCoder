#include <iostream>
#include <algorithm>
using namespace std;
int n, x, ans;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> ans;
    while (--n) cin >> x, ans = __gcd(ans, x);
    cout << ans;
}
    
