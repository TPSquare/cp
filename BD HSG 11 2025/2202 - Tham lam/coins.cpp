#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
const int maxN = 1006;
int n, m, i, a[maxN], b[maxN];
int main() {
    START("coins");
    cin >> n >> m;
    FOR(i, 0, n) cin >> a[i];
    FOR(i, 0, n) {
        cin >> b[i];
        b[i] -= a[i];
    }
    sort(b, b + n);
    FOR(i, 0, n)
        if (m >= b[i]) m += a[i];
        else break;
    cout << m;
}
