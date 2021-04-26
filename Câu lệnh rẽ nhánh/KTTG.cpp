#include <iostream>
using namespace std;
int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	if (a < b) swap(a, b);
	if (b < c) swap(b, c);
	if (a < b) swap(a, b);
	if (a == b || b == c) cout << "LA TAM GIAC CAN"; else cout << "KHONG PHAI TAM GIAC CAN";
}
