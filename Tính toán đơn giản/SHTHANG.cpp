#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double a, b, alpha, perimeter, acreage;
    long double pi = 3.14159265358979323;
    cin >> b >> a >> alpha;
    perimeter = a + b + (a - b) / cos(pi * alpha / 180);
    acreage = (a + b) * (a - b) * tan(pi * alpha / 180) / 4;
    cout << setprecision(4) << fixed << perimeter << '\n' << acreage;
}
