#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
long long v = 1e18, mod = 1e9;
int main()
{
	long double x;
	long long n, sum = 0, i = 1;
	cin >> x;
	n = x * v;
	while (sum < n) sum += v / i / i++;
	sum = round((1.0 * sum / mod));
	string s = to_string(sum);
	cout << s[0] << '.';
	for(int i = 1; i < 10; i++) cout << s[i];
}
