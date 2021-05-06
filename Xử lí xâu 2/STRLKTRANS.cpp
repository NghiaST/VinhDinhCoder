#include <iostream>
using namespace std;
int n, k;
char s[100005];

int main() {
    scanf("%d%d%s", &n, &k, &s);
    s[n] = '@';
    for(int i=1; i<n && k; i+=2) {
        if (s[i] == '4' || s[i] == '7') {
            if (s[i-1] == '4' && s[i+1] == '7') {
                if (k&1) s[i] = (s[i] == '4' ? '7' : '4');
                break;
            }
            if (s[i-1] == '4' && s[i] == '7') {
                k--;
                s[i] = '4';
            }
            if (s[i] == '4' && s[i+1] == '7') {
                k--;
                s[i] = '7';
            }
        }
    }
    for(int i=0; i<n; i++) putchar(s[i]);
}
    
