#include <bits/stdc++.h>
using namespace std;
long long n, x, sum;
int main()
{
	cin >> n;
	while (n--) {
		cin >> x;
		cout << x << ' ';
		sum = 0;
		while (x > 0) sum += x%10, x /= 10;
		cout << sum << '\n';
	}
}
    
