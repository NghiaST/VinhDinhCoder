#include <iostream>
using namespace std;
long long n, res;

int main()
{
    cin >> n;
    while (n) res += n%10, n/=10;
    cout << res;
}
    
