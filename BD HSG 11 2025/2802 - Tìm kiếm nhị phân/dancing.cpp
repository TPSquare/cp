#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define ll long long
#define FOR(i, a, b) for (i = a; i < b; i++)

#define vi vector<int>
const int maxN = 100006;
int n, i, x, idx, r;
vi bd, ba, gd, ga;
bool cbd[maxN], cba[maxN], cgd[maxN], cga[maxN];
void $cin(vi &a, vi &d) {
    FOR(i, 0, n) {
        cin >> x;
        if (x < 0) a.push_back(-x);
        else d.push_back(x);
    }
}
void $sort(vi &a) {
    sort(a.begin(), a.end());
}
void $h(vi &ba, vi &gd, bool cba[], bool cgd[]) {
    n = ba.size();
    FOR(i, 0, n) {
        idx = distance(gd.begin(), lower_bound(gd.begin(), gd.end(), ba[i]) - 1);
        while (cgd[idx] && idx > -1) --idx;
        if (idx > -1) {
            cba[i] = cgd[idx] = true;
            ++r;
        }
    }
}
int main() {
    $("dancing");
    cin >> n;
    $cin(ba, bd); $cin(ga, gd);
    $sort(ba); $sort(bd); $sort(ga); $sort(gd);
    $h(ba, gd, cba, cgd);
    $h(ga, bd, cga, cbd);
    cout << r;
}
