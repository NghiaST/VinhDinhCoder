#include <iostream>
using namespace std;
int main()
{
	long long x, n, minn = 1e18, maxx = -1e18;
	cin >> n;
	while (n--) { cin >> x; minn = min(minn, x); maxx = max(maxx, x); }
	cout << "SO LON NHAT: "<<maxx<<"\nSO BE NHAT: " << minn;
}
