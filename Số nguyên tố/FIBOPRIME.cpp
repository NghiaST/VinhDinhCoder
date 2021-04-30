#include <iostream>
#define llong long long
using namespace std;
llong a, b, res;

bool check_prime(llong x) {
    for(llong i=2; i*i <= x; i++) if (x%i == 0) return false;
    return true;
}

int main()
{
    scanf("%I64d%I64d", &a, &b);
    llong x = 1, y = 2, z;
    while (y <= b) {
        if (a <= y && check_prime(y)) res++;
        z = x + y;
        x = y;
        y = z;
    }
    cout << res;
}
    
