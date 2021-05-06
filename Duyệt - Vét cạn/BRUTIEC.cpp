#include <iostream>
using namespace std;
int n, x, r, f[1000005], Q[1000005];
void ReadInt(int &x) {
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
}

int main()
{
    ReadInt(n);
    while (n--) {
        ReadInt(x);
        if (!f[x]++) Q[r++] = x;
    }
    while (r--) if (f[Q[r]] & 1) {
        cout << Q[r];
        return 0;
    }
}
    
