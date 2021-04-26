#include <iostream>
using namespace std;
int main()
{
	long long a;
	cin >> a;
	for(int i=a; i; i--) {
		for(int j=1; j<=i; j++) cout <<'*';
		cout << '\n';
	}
}
