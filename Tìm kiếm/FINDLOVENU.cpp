#include <iostream>
#include <cmath>
using namespace std;
long long n, x, y;

int main() {
    scanf("%lld", &n);
    for(long long i=1; i*(i+1) <= n; i++) {
        x = n*2 - i*(i+1);
        y = sqrt(x);
        if (y*(y+1) != x) y--;
        if (y*(y+1) == x) {
            cout << i*(i+1)/2 << ' ' << x/2;
            return 0;
        }
    }
    cout << -1;
}
    
