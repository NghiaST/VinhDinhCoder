#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
int n, a[100005];
long long res, x, y;
int main()
{
	cin >> n >> y;
	FOR(i, 1, n) {
		cin >> x;
		if (x == y) { cout << "CO K O VI TRI " << i; return 0; }
	}
	cout << "KHONG CO K";
}
    
