#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define ll long long
#define um unordered_map
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ROFs(i, a, b) for (i = a; i >= b; i--)

const int N = 300006;
int n, i, r, a[N], s[N], t[N];
int main() {
    $("familiar");
    cin >> n;
    FOR(i, 0, n) {
        cin >> a[i];
        s[i] = n - i;
    }
    sort(a, a + n);
    FOR(i, 0, n) t[i] = a[i] + s[i];
    if (t[0] == *max_element(t, t + n)) ++r;
    FOR(i, 1, n) {
        swap(s[i], s[i - 1]);
        t[i] = a[i] + s[i];
        t[i - 1] = a[i - 1] + s[i - 1];
        if (t[i] == *max_element(t, t + n)) ++r;
    }
    cout << r;
}
