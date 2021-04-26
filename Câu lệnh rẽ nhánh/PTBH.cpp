#include <bits/stdc++.h>
using namespace std;
int main()
{
	long double a, b, c, delta;
	cout << setprecision(2) << fixed;
	cin >> a >> b >> c;
	if (a == 0) {
		if (b == 0) cout << (c == 0 ? "VO SO NGHIEM" : "VO NGHIEM");
		else cout << -c / b;
	} else {
		delta = b*b - 4*a*c;
		if (delta < 0) cout << "VO NGHIEM";
		if (delta == 0) cout << "PT CO NGHIEM KEP\nX = " << -b/a/2;
		if (delta > 0) 
	cout << "PT CO HAI NGHIEM\nX1 = " << (-b + sqrt(delta))/a/2
			 << "\nX2 = " << (-b - sqrt(delta))/a/2;
	}
}
