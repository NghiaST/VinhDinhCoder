#include <bits/stdc++.h>
using namespace std;
int main()
{
	long double x, y = 0;
	while (cin >> x && x > 0) y += x;
	y /= 4;
	cout << setprecision(2) << fixed << y;
}
