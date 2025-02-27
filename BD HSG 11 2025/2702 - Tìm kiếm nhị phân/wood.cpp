#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ll long long
ll n, m, x, t, i, mx;
unordered_map<ll, ll> a;
int main() {
    $("wood");
    cin >> n >> m;
    FOR(i, 0, n) {
        cin >> x;
        ++a[x];
        if (x > mx) mx = x;
    }
    x = 0; ++mx;
    while (t < m) {
        x += a[--mx];
        t += x;
    }
    cout << --mx;
}
