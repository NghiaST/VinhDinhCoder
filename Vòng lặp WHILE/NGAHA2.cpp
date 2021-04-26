#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long x, y, z = 0;
	cin >> x >> y;
	while (x <= y) {
		z++;
		x += round(x/10.0);
	}
	cout << z;
}
    
