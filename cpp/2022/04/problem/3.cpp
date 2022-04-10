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
    int l, r;
    cin >> l >> r;

    string s;
    cin >> s;

    string rs;

    for (int i=r-1; i>=l-1; --i) {
        rs += s[i];
    }

    int r_cnt = 0;
    for (int i=l-1; i<=r-1; ++i) {
        s[i] = rs[r_cnt];
        r_cnt++;
    }

    cout << s << endl;

    return 0;
}