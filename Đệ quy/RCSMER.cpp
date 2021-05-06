#include <iostream>
using namespace std;
long long n1, n2, x, y;

void Get1(long long x, long long y, long long n1, long long n2) {
    int v1, v2;
    while (n1 || n2) {
        if (n1) v1 = x / n1; else v1 = 10;
        if (n2) v2 = y / n2; else v2 = 10;
        if (v1 < v2 || v1 == v2 && x*n2*10+y < y*n1*10+x) {
            cout << v1;
            x %= n1;
            n1 /= 10;
        } else {
            cout << v2;
            y %= n2;
            n2 /= 10;
        }
    }
    cout << '\n';
}

void Get2(long long x, long long y, long long n1, long long n2) {
    int v1, v2;
    while (n1 || n2) {
        if (n1) v1 = x / n1; else v1 = -1;
        if (n2) v2 = y / n2; else v2 = -1;
        if (v1 > v2 || v1 == v2 && x*n2*10+y > y*n1*10+x) {
            cout << v1;
            x %= n1;
            n1 /= 10;
        } else {
            cout << v2;
            y %= n2;
            n2 /= 10;
        }
    }
}

int main() {
    scanf("%d%d", &x, &y);
    n1 = n2 = 1;
    int w = x; while (w) w/=10, n1 *= 10; n1 /= 10;
    w = y; while (w) w/=10, n2 *= 10; n2 /= 10;
    Get1(x, y, n1, n2);
    Get2(x, y, n1, n2);
}
    
