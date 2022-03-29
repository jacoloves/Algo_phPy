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
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        int d1, d2, d3;
        cin >> d1 >> d2 >> d3;
        v[i] = d1 + d2 + d3;
    }

    vector<int> v2 = v;
    sort(v2.rbegin(), v2.rend());
    int mx = v2[k-1];
    for (int i=0; i<n; ++i) {
        if (v[i]+300 >= mx) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}