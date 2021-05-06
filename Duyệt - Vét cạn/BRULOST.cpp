#include <iostream>
using namespace std;
int n,x, f[1000005];
void ReadInt(int &x) {
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
}

int main()
{
    ReadInt(n);
    while (n--) ReadInt(x), f[x] = true;
    x = 1;
    while (f[x]) x++;
    cout << x;
}
    
