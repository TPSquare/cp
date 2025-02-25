#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
int n, d, r, k, a[106], b[106], i;
int main() {
    START("busdriver");
    cin >> n >> d >> r;
    while (n != 0 || d != 0 || r != 0) {
        k = 0;
        FOR(i, 0, n) cin >> a[i];
        FOR(i, 0, n) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        FOR(i, 0, n)
            if (a[i] + b[i] > d) k += a[i] + b[i] - d;
        cout << (k * r) << "\n";
        cin >> n >> d >> r;
    }
}
