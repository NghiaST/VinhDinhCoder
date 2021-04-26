#include <iostream>
using namespace std;
int main()
{
	long long l, r, n;
	cin >> l >> r;
	if (l & 1) l++;
	if (r & 1) r--;
	n = (r - l + 2) / 2;
	cout << n * (n + l - 1);
}
