#include <iostream>
using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	cout << a*b / 2;
	if (a*b % 2 == 0) cout << ".00"; else cout << ".50";
}
