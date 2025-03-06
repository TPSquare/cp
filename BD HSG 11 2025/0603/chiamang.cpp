#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define ll long long
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)

ll n, i, a[1006];
int main() {
    $("chiamang");
    cin >> n;
    FORs(i, 1, n) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    if (a[n] % 2 == 1) cout << 0;
    else {
        i = lower_bound(a + 1, a + n + 1, a[n] / 2) - a;
        cout << (a[i] == a[n] / 2 ? i : 0);
    }
}
