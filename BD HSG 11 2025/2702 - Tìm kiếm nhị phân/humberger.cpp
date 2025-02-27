#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ll long long
#define end { cout << kq; return 0; }
#define B 'B'
#define S 'S'
#define C 'C'

unordered_map<char, ll> i, n, p;
const char keys[] = {B, S, C};
string s;
ll kq, r, t;
int main() {
    $("humberger");
    cin >> s;
    for (char x : keys) cin >> n[x];
    for (char x : keys) cin >> p[x];
    cin >> r;
    for (char x : s) ++i[x];
    kq = min(n[B] / i[B], min(n[S] / i[S], n[C] / i[C]));
    for (char x : keys) n[x] -= kq * i[x];
    while (n[S] || n[B] || n[C]) {
        for (char x : keys)
            if (n[x] < i[x]) {
                r -= (i[x] - n[x]) * p[x];
                n[x] = i[x];
            }
        if (r < 0) break;
        ++kq;
        for (char x : keys) n[x] -= i[x];
    }
    if (r > 0) {
        for (char x : keys) t += i[x] * p[x];
        kq += r / t;
    }
    cout << kq;
}
