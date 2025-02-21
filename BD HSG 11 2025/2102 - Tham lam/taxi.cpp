#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)

int n, i, t, r, a[5];
int main() {
    START("taxi");
    cin >> n;
    FOR(i, 0, n) {
        cin >> t;
        ++a[t];
    }
    r = a[4];
    t = min(a[1], a[3]);
    r += t;
    a[1] -= t;
    a[3] -= t;
    r += a[3];
    r += a[2] / 2;
    if (a[2] % 2 == 1) {
        ++r;
        a[1] -= 2;
    }
    if (a[1] > 0) {
        r += a[1] / 4;
        if (a[1] % 4 != 0) ++r;
    }
    cout << r;
    return 0;
}
