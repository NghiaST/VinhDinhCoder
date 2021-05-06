#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
long long n, d[1005], f[1005];

int main() {
    scanf("%d", &n);
    FOR(i, 1, n) scanf("%d", &d[i]);
    FOR(w, 1, n) {
        int now = w;
        while (f[now] != w) {
            f[now] = w;
            now = d[now];
        }
        cout << now << ' ';
    }
}
    
