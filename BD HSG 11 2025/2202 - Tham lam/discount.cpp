#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
int n, i, r, a[1000006];
int main() {
    START("discount");
    cin >> n;
    FOR(i, 0, n) cin >> a[i];
    sort(a, a + n);
    for (i = n % 3; i < n; i += 3)
        r += a[i];
    cout << r;
}
