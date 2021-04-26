#include <bits/stdc++.h>
using namespace std;
int main()
{
	long double a, b, c;
	cin >> a >> b >> c;
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	if (a > b) swap(a, b);
	if (a + b <= c || a <= 0) cout << "KHONGPHAITAMGIAC";
	else if (a == c) cout << "DEU";
	else if (abs(a*a + b*b - c*c) < 1e-6) {
		if (a == b) cout << "VUONG CAN"; else cout << "VUONG";
	} else if (a == b || b == c) cout << "CAN";
	else cout << "THUONG";
}
 
