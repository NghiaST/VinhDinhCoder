#include <iostream>
using namespace std;
int main()
{
	long long a1,b1,a2,b2;
	cin >> b1>>a1>>b2>>a2;
	if (a1 == a2) {
		if (b1 == b2) cout << "YES"; else cout << "NO";
		return 0;
	}
	if ((b2 - b1) % (a1 - a2) != 0) { cout << "NO"; return 0; }
	long long x = (b2 - b1) / (a1 - a2);
	if (x >= 0 && a1*x + b1 == a2*x + b2) cout << "YES"; else cout <<"NO";
	return 0;
}
  
