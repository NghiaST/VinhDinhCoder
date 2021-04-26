#include <iostream>
using namespace std;
int main()
{
	int x,y,z,t;
	cin>>x>>y>>z>>t;
	cout << 39 * ( x*z*2 + y*z*2 + (t-z) * y);
}
