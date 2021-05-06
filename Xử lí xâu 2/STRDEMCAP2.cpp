#include <iostream>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
long long f[256], res;
int main()
{
    char c = getchar();
    while (isdigit(c) || 'a' <= c && c <= 'z' || 'A' <= c && c <= 'Z') {
        f[c]++;
        c = getchar();
    }
    REP(i, 0, 256) res += f[i] * (f[i] - 1) / 2;
    cout << res;
}
    
