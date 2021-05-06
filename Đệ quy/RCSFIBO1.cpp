#include <iostream>
using namespace std;
int n;

int main()
{
    cin >> n;
    long long f1 = 0, f2 = 1, f3;
    while (n--) f3 = f1 + f2, f1 = f2, f2 = f3;
    cout << f1;
}
    
