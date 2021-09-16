#include <iostream>
using namespace std;
int n, z[100005];
string s;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> s;
    for(int i=1, l=0, r=-1; i<=n; ++i) {
        if (i <= r) z[i] = min(z[i-l], r-i+1);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) ++z[i];
        if (i + z[i] == n) return cout << i, 0;
        if (i + z[i] > r) l = i, r = i + z[i] - 1;
    }
}
    
