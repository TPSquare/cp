#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define ll long long

ll n, b, x, y, i, c, d = 2, dx;
pair<ll, ll> a[1006];
int main() {
    START("gifts");
    cin >> n >> b;
    FOR(i, 0, n) {
        cin >> x >> y;
        a[i] = {x, x + y};
    }
    sort(a, a + n, [](auto &x, auto &y) {
        if (x.second == y.second) return x.first < y.first;
        return x.second < y.second;
    });
    FOR(i, 0, n) {
        if (c >= b) break;
        if (c + a[i].second <= b) {
            c += a[i].second;
            if (a[i].first > dx) dx = a[i].first;
        } else if (d == 2 && c - dx / 2 + a[i].second <= b) {
                c -= dx / 2 - a[i].second;
                d = 1;
        } else break;
    }
    cout << i;
}
