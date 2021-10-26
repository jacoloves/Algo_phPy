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
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    rep(i, n) cin >> c[i];

    int ans = 0;
    map<int, int> mp;
    int now = 0;
    rep(i, n) {
        if (mp[c[i]] == 0) now++;
        mp[c[i]]++;
        if (i >= k) {
            mp[c[i-k]]--;
            if (mp[c[i-k]] == 0) now--;
        }
        ans = max(ans, now);
    }
    cout << ans << endl;
    return 0;
}