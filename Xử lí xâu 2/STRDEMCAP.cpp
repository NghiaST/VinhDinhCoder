#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
long long f[256], res;
int main()
{
    char c = getchar();
    while (isdigit(c) || 'a' <= c && c <= 'z') {
        f[c]++;
        c = getchar();
    }
    FOR(i, '0', '9') res += f[i]*f[i];
    FOR(i, 'a', 'z') res += f[i]*f[i];
    cout << res;
}
    
