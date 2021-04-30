#include <bits/stdc++.h>
using namespace std;
long long x, y, sum;
int main()
{
    while (cin >> x) {
        cin >> y;
        sum += x*y;
    }
    cout << "Tong thu: " << sum;
}
