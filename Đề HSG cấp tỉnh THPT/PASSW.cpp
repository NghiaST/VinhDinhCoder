#include <iostream>
#include <cstring>
using namespace std;
int n, k, cnt;
char s[260], Q[260], P[260];

int main()
{
    scanf("%d\n%[^\n]", &k, s);
    for(int i=0; i<strlen(s); ++i) if (isdigit(s[i])) Q[n++] = s[i];

    for(int i=0; i<n; ++i) {
        while (cnt + n - i > k && cnt && P[cnt] < Q[i]) --cnt;
        P[++cnt] = Q[i];
    }
    P[k+1] = '\0';
    printf("%s\n", P + 1);
    for(int i=1; i<=k; ++i) if (P[i] != P[k-i+1]) {
        printf("NO");
        return 0;
    }
    printf("YES");
}
    
