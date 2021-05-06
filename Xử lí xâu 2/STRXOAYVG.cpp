#include <iostream>
using namespace std;
int main()
{
    char c, z = 'a';
    int res = 0, v;
    while (c = getchar(), 'a' <= c && c <= 'z') {
        v = (c > z ? c-z : z-c);
        res += (v < 13 ? v : 26-v);
        z = c;
    };
    cout << res;
}
    
