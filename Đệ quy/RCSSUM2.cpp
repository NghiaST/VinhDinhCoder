#include <iostream>
using namespace std;
long long n, fsum;

int main()
{
    cin >> fsum;
    while (fsum > 9) {
        n = fsum; fsum = 0;
        while (n) fsum += n%10, n/=10;
    }
    cout << fsum;
}
    
