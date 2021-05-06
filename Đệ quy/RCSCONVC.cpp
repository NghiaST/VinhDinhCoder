#include <iostream>
using namespace std;
long long a, b, r, Q[100];

int main() {
    scanf("%d%d", &a, &b);
    while (b > a) {
        Q[r++] = b;
        if (!(b&1)) b/=2;
        else if (b%10 == 1) b/=10;
        else break;
    }
    Q[r++] = b;
    if (a == b) {
        cout << "YES\n" << r << '\n';
        while (r--) cout << Q[r] << ' ';
    } else cout << "NO\n";
}
    
