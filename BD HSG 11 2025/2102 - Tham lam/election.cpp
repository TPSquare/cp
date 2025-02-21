#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
int n, m, i, t, a[56];
int main() {
    START("election");
    cin >> n >> m;
    FOR(i, 0, n) cin >> a[i];
    sort(a, a + n, greater<int>());
    FOR(i, 0, n) {
        t += a[i];
        if (t - i >= m) {
            cout << (i + 1);
            return 0;
        }
    }
    cout << -1;
    return 0;
}
