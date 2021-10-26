#include <iostream>
using namespace std;
long long n, f[2];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(long long i=2; i*i<=n; ++i) {
        int dem = 0;
        while (n%i==0) n/=i, ++dem;
        f[dem%2] += dem;
    }
    if (n>1) ++f[1];
    cout << f[0] << '\n' << f[1];
}
