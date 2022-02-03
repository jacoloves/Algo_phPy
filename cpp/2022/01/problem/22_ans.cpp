#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    rep(i, n) cin >> s[i];
    rep(i, n) cin >> t[i];

    auto rot = [&](vector<string> a) {
        vector<string> res(n, string(n, '.'));
        rep(i, n)rep(j, n) res[j][n-1-i] = a[i][j];
        return res;
    };

    auto normalize = [&](vector<string> a) {
        int li = n, lj = n;
        rep(i,n)rep(j,n) if (a[i][j] == '#') {
            li = min(li, i);
            lj = min(lj, j);
        }
        vector<string> res(n, string(n, '.'));
        rep(i,n)rep(j,n) if (a[i][j] == '#') {
            res[i-li][j-lj] = '#';
        }
        return res;
    };

    auto same = [&](vector<string> a, vector<string> b) {
        return normalize(a) == normalize(b);
    };

    rep(ri, 4) {
        if (same(s, t)) {
            cout << "Yes" << endl;
            return 0;
        }
        t = rot(t);
    } 
    cout << "No" << endl;
    return 0;
}