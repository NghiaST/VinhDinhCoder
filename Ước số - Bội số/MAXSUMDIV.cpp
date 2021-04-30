#include <bits/stdc++.h>
using namespace std;
long long n, a, b, x, y;
int main() {
    scanf("%I64d%I64d%I64d%I64d%I64d", &n, &a, &b, &x, &y);
    cout << n/a*x + n/b*y - n*__gcd(a,b)/a/b*min(x,y);
}
    
