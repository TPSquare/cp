#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define ll long long
#define um unordered_map
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)

um<int, int> dis, last;
int n, i, x, r = INT_MAX;
int main() {
    $("rannum");
    cin >> n;
    FORs(i, 1, n) {
        cin >> x;
        dis[x] = max(dis[x], i - last[x]);
        last[x] = i;
    }
    for (auto it = dis.begin(); it != dis.end(); it++)
        r = min(r, max(it->second, n + 1 - last[it->first]));
    cout << r;
}
