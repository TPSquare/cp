#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define ll long long
#define um unordered_map
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ROF(i, a, b) for (i = a; i > b; i--)
#define ROFs(i, a, b) for (i = a; i >= b; i--)

ll n, k, sl, i, c, m, m2, a[50006];
int main() {
    $("angry");
    cin >> n >> k;
    FOR(i, 0, n) cin >> a[i];
    sort(a, a + n);
    m = (a[n - 1] + a[0]) / k / 2 + 2;
    while (!sl || sl <= k) {
        --m;
        m2 = 2 * m;
        i = sl = 0;
        while (i < n && sl <= k) {
            c = a[i++] + m2;
            ++sl;
            while (a[i] <= c && i < n) ++i;
        }
    }
    cout << (m + 1);
}
