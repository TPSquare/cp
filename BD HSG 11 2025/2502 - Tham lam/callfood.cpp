#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ll long long
ll n, x, y, i, t = 1e9, mi;
pair<ll, ll> a[500006];
int main() {
    START("callfood");
    cin >> n;
    FOR(i, 0, n) {
        cin >> x >> y;
        a[i] = {y, x - y};
        if (x < t) t = x;
    }
    sort(a, a + n, [](auto &x, auto &y) {
        if (x.first == y.first) return x.second < y.second;
        return x.first < y.first;
    });
    cout << t << "\n";
    t = a[0].first;
    mi = 0;
    FOR(i, 1, n) {
        t += a[i].first;
        if (a[mi].second > a[i].second) mi = i;
        cout << (t + a[mi].second) << "\n";
    }
}
