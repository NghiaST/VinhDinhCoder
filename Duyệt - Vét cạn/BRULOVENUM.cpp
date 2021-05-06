#include <iostream>
using namespace std;
int n, f4;

int main() {
    scanf("%d", &n);
    while (n > 3 && n%7 != 0) {
        n -= 4;
        f4++;
    }
    if (n%7 != 0) { cout << -1; return 0; }
    while (f4--) putchar('4');
    n/=7; while (n--) putchar('7');
}
    
