#include <iostream>
#include <map>
using namespace std;
int n, x;
long long res;
map<int,int> M;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; ++i) cin >> x, ++M[x];
    for(int i=1; i<=n; ++i) cin >> x, res += n - M[x];
    cout << res;
}
    
