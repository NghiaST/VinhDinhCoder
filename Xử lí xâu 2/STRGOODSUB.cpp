#include <iostream>
using namespace std;
int n, k, res = 1e9, f[26];
int main()
{
    scanf("%d%d\n", &n, &k);
    while (n--) f[getchar() - 'A']++;
    for(int i=0; i<k; i++) res = min(res, f[i]);
    cout << res*k;
}
