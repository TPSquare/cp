#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define db double

int n, i, x, y, mx, m, r;
unordered_map<int, int> p, a;
signed main() {
    START("pdx");
    cin >> n >> m;
    while (m--) {
        cin >> x >> y;
        if (x <= y) {
            ++p[x];
            --p[y + 1];
        } else {
            ++p[1];
            --p[y + 1];
            ++p[x];
            --p[n + 1];
        }
    }
    FORs(i, 1, n) {
        a[i] = a[i - 1] + p[i];
        if (a[i] > mx) mx = a[i];
    }
    FORs(i, 1, n)
        if (a[i] == mx) ++r;
    cout << mx << " " << r;
}

