#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
int n, m, res;
int dec(int n) {
    m = 0;
    while (n > 0) {
        m = max(n % 10, m);
        n /= 10;
    }
    return m;
}
signed main() {
    START("decrease");
    cin >> n;
    while (n > 0) {
        n -= dec(n);
        ++res;
    }
    cout << res;
}
