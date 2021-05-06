#include <iostream>
#include <cstring>
using namespace std;
int n1, n2, t[10], cnt[10], cnt2[20], Ans[20], Ans2[20];
char s1[20], s2[20];
int main()
{
    scanf("%s%s", &s1, &s2);
    n1 = strlen(s1);
    n2 = strlen(s2);
    for(int i=0; i<n1; i++) t[s1[i]-'0']++;
    if (n1 > n2) {
        cout << -1;
        return 0;
    }
    if (n1 < n2) {
        for(int i=9; i>=0; i--)
            for(int j=t[i]; j; j--) cout << i;
        return 0;
    }
    if (n1 == 1 && s1[0] == '0') {
        cout << 0;
        return 0;
    }
    bool ok1 = true, ok2 = false;
    for(int i=0; i<n1; i++) {
        if (ok2) {
            int choice = 10;
            for(int j=0; j<10; j++)
                if (t[j] - cnt2[j]) choice = j;
            Ans2[i] = choice;
            cnt2[choice]++;
        }
        if (ok1) {
            int choice1 = 10, choice2 = 10;
            for(int j=0; j<10; j++) {
                if (t[j] - cnt[j] && (i||j) && (s2[i]-'0'>=j)) choice1 = j;
                if (t[j] - cnt[j] && (i||j) && (s2[i]-'0'>j)) choice2 = j;
            }
            if (choice1 == 10) ok1 = false;
            if (choice1 == choice2) ok1 = false;
            if (choice2 != 10) {
                ok2 = true;
                for(int j=0; j<i; j++) Ans2[j] = Ans[j];
                for(int j=0; j<10; j++) cnt2[j] = cnt[j];
                Ans2[i] = choice2;
                cnt2[choice2]++;
            }
            if (ok1) {
                Ans[i] = choice1;
                cnt[choice1]++;
            }
        }
    }
    if (ok1) { for(int i=0; i<n1; i++) cout << Ans[i]; }
    else if (ok2) { for(int i=0; i<n1; i++) cout << Ans2[i]; }
    else cout << -1;
}
    
