#include <iostream>
using namespace std;
int main()
{
	long long x, n, am = 0, duong = 0;
	cin >> n;
	while (n--) { cin >> x; if (x>0) duong++; if (x<0) am++; }
	cout <<"SO DUONG: "<<duong<<"\nSO AM: "<<am;
}
