#include <iostream>
using namespace std;
int main()
{
	long long l, r, n;
	cin >> l >> r;
	if (l%3 != 0) l += 3 - l%3;
	r -= r%3;
	n = (r - l + 3) / 3;
	cout << n;
}
