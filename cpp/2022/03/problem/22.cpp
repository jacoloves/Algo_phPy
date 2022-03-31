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
#include <cmath>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    ll n, w;
    cin >> n >> w;

    vector<pair<ll, ll>> vp(n);

    for (int i = 0; i < n; ++i) {
        cin >> vp[i].first >> vp[i].second;
    }

    sort(vp.rbegin(), vp.rend());
    // sort(vp.begin(), vp.end());
    // reverse(vp.begin(), vp.end());

    ll res = 0;
    for (int i = 0; i < n; ++i) {
        res += vp[i].first * min(w, vp[i].second);
        w -= min(w, vp[i].second);
    }

    cout << res << endl;

    return 0;
}