#include <iostream>
#define getBIT(x, i) ((x>>i)&1)
using namespace std;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=0; i < 1<<n; i++) {
        for(int j=n-1; j>=0; j--) cout << getBIT(i, j);
        cout << '\n';
    }
}
    
