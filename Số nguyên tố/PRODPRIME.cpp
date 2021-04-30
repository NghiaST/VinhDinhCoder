#include <iostream>
#define llong long long
using namespace std;
llong n;

bool check_prime(llong x) {
    for(llong i=2; i*i <= x; i++) if (x%i == 0) return false;
    return true;
}

int main()
{
    scanf("%I64d", &n);
    if (check_prime(n+1)) cout << "NO"; else cout << "YES";
}
    
