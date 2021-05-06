#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define N 10005
using namespace std;
long long a, b, c;

bool check2(int x) {
    int q;
    while (x) {
        q = x%10; x/=10;
        if (q != 6 && q != 8) return false;
    }
    return true;
}

bool check(int x) {
    for(int i=1; i*i <= x; i++) if (x%i == 0) {
        if (check2(i) || check2(x/i)) return true;
    }
    return false;
}

int main() {
    int t, x;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &x);
        cout << (check(x) ? "YES\n" : "NO\n");
    }
}
    
