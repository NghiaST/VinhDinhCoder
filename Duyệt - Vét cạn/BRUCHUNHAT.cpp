#include <iostream>
using namespace std;
long long a, b, c;

int main() {
    scanf("%lld%lld", &a, &b);
    c = min(a,b);
    long long fmax = max(a*b, a*b - a*c + c*c);
    if (a < b*2) c = a/2;
    long long fmin = a*b - a*c + c*c;
    cout << fmax/2 << (fmax&1 ? ".5" : ".0") << '\n';
    cout << fmin/2 << (fmin&1 ? ".5" : ".0") << '\n';
}
    
