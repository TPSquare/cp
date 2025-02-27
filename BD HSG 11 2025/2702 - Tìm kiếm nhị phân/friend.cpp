#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ll long long
ll n, b, x, i, r;
unordered_map<ll, ll> s;
vector<ll> a;
int main() {
    $("friend");
    cin >> n >> b;
    FOR(i, 0, n) {
        cin >> x;
        if (++s[x] == 1) a.push_back(x);
    }
    sort(a.begin(), a.end());
    FOR(i, 0, n)
        if (binary_search(a.begin() + i + 1, a.end(), b - a[i]))
            r += s[a[i]] * s[b - a[i]];
    cout << r;
}
