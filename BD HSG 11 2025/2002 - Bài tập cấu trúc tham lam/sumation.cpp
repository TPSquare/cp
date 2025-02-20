#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define db double
int n, i, x, y;
db r;
set<int> a;
signed main() {
    START("sumation");
    cin >> n;
    FOR(i, 0, n) {
        cin >> x;
        a.insert(x);
    }
    auto it = a.begin();
    i = 1;
    while (i < a.size()) {
        x = *it;
        advance(it, 1);
        y = *it;
        a.insert(x + y);
        advance(it, 1);
        r += (db) (x + y) * 0.05;
        i += 2;
    }
    cout << fixed << setprecision(2) << r;
}
