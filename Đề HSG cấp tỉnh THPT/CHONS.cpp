#include <iostream>
#include <bitset>
using namespace std;
int n, x;
bitset<100001> bit;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    bit[0] = 1;
    while (n--) {
        cin >> x;
        bit |= bit << x;
    }
    cout << bit.count() - 1;
}
    
