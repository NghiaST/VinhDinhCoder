#include <bits/stdc++.h>
using namespace std;
string s,s2,s3,s4;
int main()
{
    cin >> s >> s2; s3 = s; s4 = s2;
    while (s.length() < s2.length()) s = '0' + s;
    while (s.length() > s2.length()) s2 = '0' + s2;
    cout << (s > s2 ? s3 : s4);
}
    
