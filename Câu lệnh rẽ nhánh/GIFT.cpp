#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	while (n--) {
		unsigned long long x,y,u,v,t;
		cin >> x>>y>>u>>v>>t;
		if (u+t < v) v = u + t;
		if (v+t < u) u = v + t;
		cout << x*u + y*v << '\n';
	}
}
