#include <bits/stdc++.h>
using namespace std;
long long x, y;
int main() {
    scanf("%I64d%I64d", &x, &y);
    cout << x * y / __gcd(x,y) / __gcd(x,y);
}
    
