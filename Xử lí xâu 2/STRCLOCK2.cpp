#include <iostream>
using namespace std;
int n, x1;
char s[100005];

int main() {
    scanf("%d%s", &n, &s);
    if (n == 24) {
        x1 = s[0]*10 + s[1] - '0'*11;
        if (x1>=24) x1 %= 10;
        cout << x1/10 << x1%10 << ':';
        x1 = s[3] - '0';
        if (x1 > 5) x1 = 0;
        cout << x1 << s[4];
    } else {
        x1 = s[0]*10 + s[1] - '0'*11;
        if (!x1) x1++;
        if (x1>=12) x1 %= 10;
        if (!x1) x1 = 10;
        cout << x1/10 << x1%10 << ':';
        x1 = s[3] - '0';
        if (x1 > 5) x1 = 0;
        cout << x1 << s[4];
    }
}
    
