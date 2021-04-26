#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long x, y = 0, z = 0;
	cin >> x;
	while (x > 0) {
		y += x;
		z += x;
		x = z/10*3;
		z %= 10;
	}
	cout << y;
}
    
