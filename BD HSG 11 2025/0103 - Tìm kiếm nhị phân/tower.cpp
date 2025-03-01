#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define ll long long
#define um unordered_map
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ROF(i, a, b) for (i = a; i > b; i--)
#define ROFs(i, a, b) for (i = a; i >= b; i--)

set<ll> a;
ll n, x;
int main() {
    $("tower");
    cin >> n >> x;
    a.insert(x);
    --n;
    while (n--) {
        cin >> x;
        auto it = lower_bound(a.begin(), a.end(), x);
        if (it == a.end()) a.insert(x);
        else {
            a.erase(it);
            a.insert(x);
        }
    }
    cout << a.size();
}
