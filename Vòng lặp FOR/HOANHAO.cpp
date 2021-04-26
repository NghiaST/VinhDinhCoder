#include <iostream>
using namespace std;
int main()
{
	long long a, b = 0, i;
	cin >> a;
	for(i = 1; i*i < a; i++) if (a % i == 0)
        b += i + a/i;
	if (i*i == a && a % i == 0) b += i;
	cout << (a*2 == b ? "YES" : "NO");
}
    
