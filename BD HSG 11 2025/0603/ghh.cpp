#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define ll long long

ll i, n, j, m, a[1000006], tu, ghh[1000006], snt[1000006];
bool c(ll x) {
    if (x < 6) return 0;
    tu = 1;
    for (int i = 2; i * i <= x; i++) {
        if (x % i != 0) continue;
        if (x / i != i) tu += x / i + i;
        else tu += i;
    }
    return x <= tu;
}
bool p(ll x) {
    if (x < 2) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    for (int i = 3; i * i <= x; i += 2)
        if (x % i == 0) return 0;
    return 1;
}
int main() {
    $("ghh");
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > m) m = a[i];
    }
    fill(snt, snt + m + 10, 1);
    for (i = 2; i <= m; i++)
        if (snt[i])
            if (p(i))
                for (j = i + i; j <= m; j += i) snt[i] = 0;
            else snt[i] = 0;
    for (i = 0; i < n; i++)
        if (snt[a[i]]) cout << "0\n";
        else cout << c(a[i]) << "\n";
}
