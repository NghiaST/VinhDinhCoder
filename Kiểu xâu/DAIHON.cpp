#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	long long a, b, k, t;
	char s1[10005], s2[10005];
    gets(s1);
    gets(s2);
    if (strlen(s1) < strlen(s2)) cout << s2; else cout << s1;
}
    
