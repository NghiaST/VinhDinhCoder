#include <iostream>
using namespace std;
int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	cout << "So lon nhat: " << max(max(a, b), c);
}
