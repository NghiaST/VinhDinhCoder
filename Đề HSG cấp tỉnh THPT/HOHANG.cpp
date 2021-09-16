#include <iostream>
using namespace std;
int t, n, ok, c[256];
string s;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n >> s;
        for(int i=0; i<n; ++i) ++c[s[i]];
        cin >> s;
        for(int i=0; i<n; ++i) --c[s[i]];
        ok = true;
        for(int i='A'; i<='Z'; ++i) if (c[i]) ok = false, c[i] = 0;
        cout << ok << '\n';
    }
}
    
