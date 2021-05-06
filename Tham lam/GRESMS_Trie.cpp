#include <iostream>
#include <cstring>
using namespace std;
int n, k, m, cost[100005], pos[100005], val[100005];
string s;
long long res;
typedef struct Trie{
    Trie *x[26];
    int val;
} *trie;

trie New() {
    trie a = new Trie();
    a->val = 0;
    return a;
}

trie root = New();

void Insert(string s, int p) {
    int nn = s.size();
    trie now = root;
    for(int i=0; i<nn; i++) {
        if (now->x[s[i]-'a'] == NULL) now->x[s[i]-'a'] = New();
        now = now->x[s[i]-'a'];
    }
    now->val = p;
}

int Find(string s) {
    int nn = s.size();
    trie now = root;
    for(int i=0; i<nn; i++) {
        if (now->x[s[i]-'a'] == NULL) return 0;
        now = now->x[s[i]-'a'];
    }
    return now->val;
}

int main()
{
    scanf("%d%d%d", &n, &k, &m);
    for(int i=1; i<=n; i++) {
        cin >> s;
        Insert(s, i);
    }
    for(int i=1; i<=n; i++) scanf("%d", &cost[i]);
    for(int i=1; i<=k; i++) {
        int x, j, mmin = 1e9;
        scanf("%d", &x);
        while (x--) {
            scanf("%d", &j);
            pos[j] = i;
            mmin = min(mmin, cost[j]);
        }
        val[i] = mmin;
    }
    for(int i=1; i<=m; i++) {
        cin >> s;
        res += val[pos[Find(s)]];
    }
    cout << res;
}
    
