#include <iostream>
using namespace std;

bool check_prime(int x) {
    for(int i=2; i*i <= x; i++) if (x%i == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    if (n == 2 || n == 3 || n == 5) { cout << 1; return 0; }
    if (n > 2 && n%2 == 0) { cout << 2; return 0; }
    if (check_prime(n)) { cout << 1; return 0; }
    if (check_prime(n-2)) { cout << 2; return 0; }
    cout << 3;
}
    
