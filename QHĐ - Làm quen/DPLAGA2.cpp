#include <iostream>
using namespace std;
int main()
{
    int n, f1 = 1, f2 = 1, tmp;
    cin >> n;
    while (n--) {
        tmp = f1;
        f1 = (2ll*f1+f2) % 1000000007;
        f2 = tmp;
    }
    cout << f1;
}
    
