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
    int l, r;
    cin >> l >> r;

    int cnt = 0;
    for (int i=l; i<=r; ++i) {
        if (i < 10) cnt++;
        else if (i < 100) {
            int comp_a, comp_b;
            int tmp = i;
            comp_a = tmp % 10;
            tmp /= 10;
            comp_b = tmp % 10;
            if (comp_a == comp_b) cnt++;
        }
        else {
            int comp_a, comp_b, comp_c;
            int tmp = i;
            comp_a = tmp % 10;
            tmp /= 10;
            comp_b = tmp % 10;
            tmp /= 10;
            comp_c = tmp % 10;
            
            if (comp_a == comp_b && comp_b == comp_c) cnt++; // 111, 222
            else if (comp_a == comp_c) cnt++; // 101, 232, 363
        }
    }

    cout << cnt << endl;

    return 0;
}