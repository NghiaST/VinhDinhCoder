#include <iostream>
using namespace std;
long long n, cnt = 1;

int main() {
    cin >> n;
    while (n != 1) {
        cnt++;
        if (n&1) n=n*3+1; else n>>=1;
    }
    cout << cnt;
}
    
