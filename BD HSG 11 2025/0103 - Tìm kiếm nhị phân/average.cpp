#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define ll long long
#define um unordered_map
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ROF(i, a, b) for (i = a; i > b; i--)
#define ROFs(i, a, b) for (i = a; i >= b; i--)

pair<ll, ll> a[10000006];
ll n, k, i, x;
int main() {
    $("average");
    cin >> n >> k;
    FORs(i, 1, n) {
        cin >> x;
        a[i] = {i, a[i - 1].second + x};
    }
}
