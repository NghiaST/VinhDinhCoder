#include <iostream>
using namespace std;
int main()
{
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (a*a + b*b == c*c + d*d ? "BANG NHAU" : (a*a + b*b > c*c + d*d ? "B" : "A"));
}
