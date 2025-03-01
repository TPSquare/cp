#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define ll long long
#define um unordered_map
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ROFs(i, a, b) for (i = a; i >= b; i--)

int r, k, c, n, i, x, a[50000];
int main() {
    $("angry");
    cin >> n >> r;
    r *= 2;
    FOR(i, 0, n) cin >> a[i];
    sort(a, a + n);
    i = 0;
    while (i < n) {
        ++k;
        cout << a[i] << " ";
        c = a[i++] + r;
        while (a[i] <= c && i < n) cout << a[i++] << " ";
        cout << "\n";
    }
    cout << k;
}
