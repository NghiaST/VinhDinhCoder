#include <bits/stdc++.h>
#define REP(i, l, r) for(int i = l; i < r; i++)
using namespace std;
long long n;
long long a[100005];
int main()
{
	cin >> n;
	REP(i,0,n) cin >> a[i];
	sort(a, a+n);
	REP(i,0,n) cout << a[i] << ' ';
}
    
