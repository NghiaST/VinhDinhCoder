#include <iostream>
using namespace std;
long long t, n, d;

int main() {
    scanf("%d", &t);
    while (t--) {
        d = 0;
        scanf("%lld", &n);
        while (n%10 == 0) n/=10, d++;
        while (n%2 == 0) n/=2, d--;
        if (d >= 0 && n == 1) cout << "Yes\n"; else cout << "No\n";
    }
}
    
