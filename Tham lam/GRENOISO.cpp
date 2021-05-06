#include <iostream>
#include <algorithm>
using namespace std;
int n;
string s[100005];
int main()
{
    while(cin >> s[n]) n++;
    sort(s, s+n, [] (string A, string B) {return A+B > B+A;});
    for(int i=0; i<n; i++) cout << s[i];
}
    
