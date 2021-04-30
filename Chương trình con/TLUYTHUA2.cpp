#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
using namespace std;
long long a,b,sum;
int main()
{
    cin >> a >> b;
    FOR(i,1,a) sum += pow(i,b);
    cout << sum;
}
    
