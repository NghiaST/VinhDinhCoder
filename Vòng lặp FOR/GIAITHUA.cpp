#include <iostream>
using namespace std;
int main()
{
	long long n, res = 1;
	cin >> n;
	for(int i=1; i<=n; i++) res *= i;
	cout << res;
}
