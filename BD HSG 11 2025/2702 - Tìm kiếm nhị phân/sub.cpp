#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define LL long long
LL n, s, r, i, a[100006];
int main() {
    $("sub");
    cin >> n >> s;
    FORs(i, 1, n) {
        cin >> r;
        a[i] = a[i - 1] + r;
    }
    r = n;
    FORs(i, 1, n)
        r = min(r, (LL)(distance(a + i, lower_bound(a + i + 1, a + n, s + a[i - 1]))));
    cout << ++r;
}
