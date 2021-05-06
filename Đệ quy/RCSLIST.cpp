#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
long long n;

struct Data{
    long long x, y, z;
    bool operator < (Data &other) { return x < other.x || x == other.x && y > other.y; }
    void read() {
        scanf("%lld", &z); x = z;
        while (x%3==0) y++, x/=3;
    }
} a[105];

int main() {
    scanf("%d", &n);
    FOR(i, 1, n) a[i].read();
    sort(a+1, a+n+1);
    FOR(i, 1, n) cout << a[i].z << ' ';
}
    
