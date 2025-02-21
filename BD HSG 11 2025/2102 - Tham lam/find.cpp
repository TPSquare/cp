#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define r0 return 0
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ROFs(i, a, b) for (i = a; i >= b; i--)
#define F first
#define S second
#define ll long long
bool isprime(int &x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i * i <= x; i += 2)
        if (x % i == 0) return false;
    return true;
}
int m, x = 2, i;
vector<int> tsnt, res;
signed main() {
    START("find");
    cin >> m;
    if (m == 0) {
        cout << "10";
        r0;
    }
    if (m < 10) {
        cout << m;
        r0;
    }
    if (m > 9 && isprime(m)) {
        cout << -1;
        r0;
    }
    ROFs(i, 9, 2)
        while (m > 1 && m % i == 0) {
            res.push_back(i);
            m /= i;
        }
    if (m > 1) cout << -1;
    else {
        sort(res.begin(), res.end());
        for (int x : res) cout << x;
    }
}


