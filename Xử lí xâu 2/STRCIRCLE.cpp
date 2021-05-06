#include <iostream>
#include <cstring>
#include <set>
using namespace std;
int n, m;
string s;
set<string> S1;

int main()
{
    cin >> s; n = m = s.length();
    while (m--) {
        char c = s[n-1];
        s.erase(n-1, 1);
        s = c + s;
        S1.insert(s);
    }
    cout << S1.size();
}
    
