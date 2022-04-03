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
    ll n, a, b;
    ll p, q, r, s;
    ll x, y;

    cin >> n >> a >> b;
    cin >> p >> q >> r >> s;

    ll h = q-p+1, w = s-r+1;
    vector<string> ans;

    string str = "";
    for (ll i = 0; i < w; ++i) str += '.';
    for (ll i = 0; i < h; ++i) ans.push_back(str);

    x = max(p-a, r-b);
    y = min(q-a, s-b);
    for (ll i=x; i<=y; i++) ans[a+i-p][b+i-r] = '#';

    x = max(p-a, b-s);
    y = min(q-a, b-r);
    for (ll i=x; i<=y; i++) ans[a+i-p][b-i-r] = '#';

    for (int i=0; i<h; ++i) cout << ans[i] << endl;
    return 0;
}