#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long a, b = 0, x;
	cin >> a;
	while(a--) {
		cin >> x;
		if (x == 1) b++; else b--;
	}
	cout << abs(b);
}
    
