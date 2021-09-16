#include <iostream>
using namespace std;
int n;
long long res;

int main()
{
    cin >> n;
    for(int i=1; i<n; ++i) res += (n-1) / i;
    cout << res;
}
