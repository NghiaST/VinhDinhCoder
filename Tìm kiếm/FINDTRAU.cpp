#include <iostream>
#include <iomanip>
using namespace std;
long double x, y, u, v;

int main() {
    cin >> x >> y >> u >> v;
    cout << setprecision(5) << fixed;
    if (y < 0) y = -y;
    if (v < 0) v = -v;
    if (!y && !v) { cout << x; return 0; }
    cout << x + (u - x) * y / (v + y);
}
    
