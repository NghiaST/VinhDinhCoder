#include <bits/stdc++.h>
using namespace std;
int main()
{
	long double a, b, c, res, p;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	res = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << setprecision(2) << fixed << res;
}
