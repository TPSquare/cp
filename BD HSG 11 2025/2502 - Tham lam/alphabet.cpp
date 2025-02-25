#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
int t, n, i, j, l;
char a[26][26];
int main() {
    START("alphabet");
    cin >> t;
    FORs(l, 1, t) {
        cin >> n;
        FORs(i, 1, n)
            FORs(j, 1, n) cin >> a[i][j];
        cout << "Case " << l << ":\n";
        FORs(i, 1, n) {
            FORs(j, 1, n) {
                if (a[i][j] == '.') {
                    a[i][j] = 'A';
                    while (
                        a[i][j] == a[i - 1][j] ||
                        a[i][j] == a[i][j + 1] ||
                        a[i][j] == a[i + 1][j] ||
                        a[i][j] == a[i][j - 1]
                    ) ++a[i][j];
                }
                cout << a[i][j];
            }
            cout << "\n";
        }
    }
}
