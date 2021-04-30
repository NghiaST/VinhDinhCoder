#include <bits/stdc++.h>
using namespace std;
long long n, x, y, z, res;
int main() {
    cin >> x >> y >> z >> n;
    x = x*y/__gcd(x,y);
    x = x*z/__gcd(x,z);
    n = pow(10, n); n--;
    res = n / x * x;
    n /= 10;
    if (res >= n) cout << res; else cout << -1;
}
    
