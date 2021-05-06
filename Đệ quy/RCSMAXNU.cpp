#include <iostream>
#include <cstring>
using namespace std;
long long n, res;
char s[5005];

void Get(int x) {
    if (x == n) return;
    Get(x+1);
    if (res < s[x]) res = s[x];
}

int main()
{
    scanf("%[^\n]", &s); n = strlen(s);
    Get(0);
    cout << res - '0';
}
    
