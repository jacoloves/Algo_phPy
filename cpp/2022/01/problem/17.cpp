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
    double a;
    cin >> a;

    int b = a * 10;
    int ans, ans_p;
    ans_p = b % 10;
    ans = b / 10;

    if (0 <= ans_p && ans_p <= 2) {
        cout << ans << "-" << endl;
    } else if (3 <= ans_p && ans_p <= 6) {
        cout << ans << endl;
    } else {
        cout << ans << "+" << endl;
    }

    return 0;
}