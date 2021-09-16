#include <iostream>
#include <cmath>
using namespace std;
long long n, n2;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    n2 = trunc(sqrt(n));
    cout << n * (n+1) / 2 - n2 * (n2 + 1) * (n2 * 2 + 1) / 6;
}
    
