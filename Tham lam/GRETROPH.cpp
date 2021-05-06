#include <iostream>
using namespace std;
int n, cnt, res;
char s[100005];
int main()
{
    scanf("%d%s", &n, &s);
    for(int i=0, p=0; i<n; i++) if (s[i]=='G') cnt++;
    for(int i=0, lft=0, prv=0; i<n; i++) {
        if (s[i] == 'S') {
            res = max(res, prv + (i-lft) + 1);
            prv = i-lft;
            lft = i+1;
        }
        if (i==n-1) res = max(res, prv + i-lft+2);
    }
    cout << min(res, cnt);
}
    
