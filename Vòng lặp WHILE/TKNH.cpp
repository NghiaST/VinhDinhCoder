#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long sl = 0;
	long double x, y, nn = 1.011;
	cin >> x >> y; x *= 1000000000; y *= 1000000000;
	while (x < y) x *= nn, sl++;
	cout << sl;
}
    
