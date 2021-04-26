#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long n, k;
	cin >> n >> k;
	cout << min(n, (long long) ((1 + sqrt(24.0*k + 1)) / 6));
}
