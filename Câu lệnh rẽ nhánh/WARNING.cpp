#include <iostream>
using namespace std;
int main()
{
	long long a, b, k, t;
	cin >> a >> b >> k >> t;
	if (a*b*k >= t*300) cout << "YES"; else cout << "WARNING";
}
