#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long long a, b;
	long double res;
	cin >> a >> b;
	if (a == 0) {
		cout << (b == 0 ? "VO SO NGHIEM" : "VO NGHIEM");
		return 0;
	}
	cout << "PT CO NGHIEM\nX = ";
	res = 1.0 * -b / a;
	cout << setprecision(2)  << fixed << res;
}
