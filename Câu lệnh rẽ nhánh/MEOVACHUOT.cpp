#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	if (abs(a - c) == abs(b - c)) cout << "Mouse_C";
	else if (abs(a - c) > abs(b - c)) cout << "Cat_B"; else cout << "Cat_A";
}
