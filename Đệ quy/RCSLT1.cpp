#include <iostream>
using namespace std;
const int mod = 1e9 + 7;
int x, n;

long long power(int x, int k) {
    if (!k) return 1;
    long long w = power(x, k/2);
    w = (w*w);
    if (k&1) w = (w*x);
    return w;
}

int main()
{
    cin >> x >> n;
    cout << power(x, n);
}
    
