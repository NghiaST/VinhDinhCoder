#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
long long n;

int main()
{
    scanf("%d", &n);
    long double val = 0;
    for(int i=1; i<=n; i++) {
        val = sqrt(val + i);
    }
    cout << setprecision(3) << fixed << val;
}
    
