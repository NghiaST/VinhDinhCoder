#include <iostream>
#include <cstring>
using namespace std;
long long n;
char s[5005];

void Print(int x) {
    if (x == n) return;
    Print(x+1);
    putchar(s[x]);
}

int main()
{
    scanf("%[^\n]", &s); n = strlen(s);
    Print(0);
}
    
