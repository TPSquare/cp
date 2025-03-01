#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define ll long long
#define um unordered_map
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ROF(i, a, b) for (i = a; i > b; i--)
#define ROFs(i, a, b) for (i = a; i >= b; i--)
#define B begin()
#define E end()
#define F first
#define S second
#define SZ size()
#define A(x) x.begin(), x.end()

ll n, k, i, j, kt, tt, c, a[100006], t;
int main() {
    $("count");
    cin >> n >> k;
    FOR(i, 0, n) cin >> a[i];
    sort(a, a + n);
    FOR(i, 1, n) {
        tt = 1;
        kt = k;
        j = i - 1;
        while (j >= 0 && kt > 0 && a[i] - a[j] <= kt) {
            kt -= a[i] - a[j--];
            ++tt;
        }
        if (tt > t) {
            t = tt;
            c = a[i];
        }
    }
    cout << t << " " << c;
}
