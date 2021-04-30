#include <bits/stdc++.h>
using namespace std;
long long x, sum;
int main()
{
    char c = getchar();
    while (true) {
        while (!isdigit(c) && (c == '\n' || c == ' '))
            c = getchar();
        if (!isdigit(c)) return 0;
        x = 0;
        while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
        sum += x;
        if (c == '\n') cout << sum << '\n',
            sum = 0;
    }
}
    
