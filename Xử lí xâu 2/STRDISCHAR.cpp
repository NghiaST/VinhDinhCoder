#include <iostream>
using namespace std;
int f[256];
int main()
{
    char c;
    int i = 1;
    while (c = getchar(), isdigit(c) || 'A' <= c && c <= 'Z' || 'a' <= c && c <= 'z') {
        if (!f[c]) i^=1, f[c] = true;
    };
    cout << (i ? "GIRL" : "NONO");
}
    
