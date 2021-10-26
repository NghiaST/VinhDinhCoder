#include <bits/stdc++.h>
using namespace std;
int sum, arr[10];
char c;

int main()
{
    c = getchar();
    while (isdigit(c)) {
        ++arr[c - '0'];
        (sum += c - '0') %= 3;
        c = getchar();
    }
    if (sum == 0 && arr[0] > 0) {
        for(int i=9; i>=0; --i)
            while (arr[i]--) putchar(i + 48);
    }
    else cout << -1;
}
    
