#include <bits/stdc++.h>
using namespace std;
long long n, x, y, z;
int main() {
    scanf("%I64d", &n);
    x = 360;
    for(int i=n; i; i--) {
        scanf("%I64d", &y);
        x = __gcd(x, y);
        if (y == z || y == 360 || y == 0) n--;
        z = y;
    }
    cout << 360/x - n - 1;
}
    
