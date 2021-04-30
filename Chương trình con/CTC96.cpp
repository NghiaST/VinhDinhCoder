#include <bits/stdc++.h>
using namespace std;
long long x, y, z, l;
int main()
{
    cin >> x >> y >> z >> l;
    cout << __gcd(x, __gcd(y, __gcd(z, l)));
}
    
