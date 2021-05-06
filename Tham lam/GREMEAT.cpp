#include <iostream>
using namespace std;
int n, x;
long long p, val, res;
int main()
{
    scanf("%d", &n);
    val = 1e9;
    while (n--) {
        scanf("%d%lld", &x, &p);
        val = min(p, val);
        res += val*x;
    }
    cout << res;
}
    
