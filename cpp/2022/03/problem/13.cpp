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
    int s, t, x;
    cin >> s >> t >> x;

    if (s < t) {
        if (s <= x || x < t) cout << "Yes" << endl;
        else cout << "No" << endl;
    } else if (t < s) {
        if ((0 <= x && x < t) || (s <= x && x <= 23)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}