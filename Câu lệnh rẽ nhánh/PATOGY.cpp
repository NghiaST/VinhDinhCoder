#include <iostream>
using namespace std;
int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	if (a < b) swap(a, b);
	if (b < c) swap(b, c);
	if (a < b) swap(a, b);
	if (a*a == b*b+c*c) cout << "Ba so da nhap la bo so Pi-ta-go";
	else cout << "Ba so da nhap khong la bo so Pi-ta-go";
}
