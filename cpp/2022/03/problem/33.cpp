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
    int n, q; cin >> n >> q;
    vector<int> v(n);
    for (int i=0; i<n; ++i) cin >> v[i];
    sort(v.begin(), v.end());
    vector<int> ans(q);
    for (int i = 0; i < q; i++)
    {
        int x; cin >> x;
        ans[i] = v.end() - lower_bound(v.begin(), v.end(), x);
    }
    
    for (int i = 0; i < q; ++i) {
        cout << ans[i] << endl;
    }
    return 0;
}