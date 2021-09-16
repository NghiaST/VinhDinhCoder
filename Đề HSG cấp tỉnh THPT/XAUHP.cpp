#include <iostream>
using namespace std;
int t, n;
string s;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> s; n = s.length();
        bool ok = true;
        for(int i=1; i<n; ++i)
            if (abs(s[i] - s[i-1]) != abs(s[n-i] - s[n-i-1])) ok = false;
        cout << (ok ? "YES\n" : "NO\n");
    }
}
