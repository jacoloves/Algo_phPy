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
#include <regex> // regex

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n);

    int res = 0;
    for (int i=0; i<n; ++i) {
        if (i == 0) {
            v[i] = x;
        } else if (i == 1){
            v[i] = y;
        } else {
            v[i] = (v[i-2] + v[i-1]) % 100;
        }
        res = v[i];
    }

    cout << res << endl;

    return 0;
}
