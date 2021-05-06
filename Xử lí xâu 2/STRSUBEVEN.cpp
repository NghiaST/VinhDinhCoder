#include <iostream>
using namespace std;

int main()
{
    long long res = 0;
    char c;
    int i = 0;
    while (c = getchar(), i++, isdigit(c)) {
        if (!(c&1)) res += i;
    }
    cout << res;
}
    
