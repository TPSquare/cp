#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define ll long long
#define um unordered_map
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ROFs(i, a, b) for (i = a; i >= b; i--)

const int maxN = 1006;
int n, i, a[maxN], b[maxN], c[maxN], j, k, r;
void input(int a[]) {
    FOR(i, 0, n) cin >> a[i];
    sort(a, a + n);
}
int main() {
    $("triangle");
    cin >> n;
    input(a); input(b); input(c);
    ROFs(i, n - 1, 0)
        ROFs(j, n - 1, 0) {
            k = distance(c, lower_bound(c, c + n, a[i] + b[j]) - 1);
            while (k > -1 && a[i] + b[j] > c[k] && a[i] + c[k] > b[j] && b[j] + c[k] > a[i]) {
                ++r;
                --k;
            }
        }
    cout << r;
}
