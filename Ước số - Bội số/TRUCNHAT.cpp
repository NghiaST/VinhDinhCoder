#include <bits/stdc++.h>
using namespace std;
long long n, x, y;
int main() {
    scanf("%I64d%I64d", &x, &y);
    n = __gcd(x, y);
    cout << x*y/n << "\nAn: " << y/n << "\nBach: " << x/n;
}
    
