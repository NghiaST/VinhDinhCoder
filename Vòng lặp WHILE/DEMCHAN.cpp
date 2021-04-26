#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long x, y;
	cin >> x >> y;
	y-= y%6;
	if (x%6 != 0) x += 6-x%6;
	cout << (y - x + 6) / 6;
}
    
