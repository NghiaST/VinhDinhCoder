#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long x, y = 0;
	cin >> x;
	while (x > 0) y+=x%10, x /=10;
	cout << (y % 10 == 9 ? "YES" : "NO");
}
    
