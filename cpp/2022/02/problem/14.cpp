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
    int h, w;
    cin >> h >> w;

    vector<vector<int>> v(h, vector<int>(w));

    for (int i=0; i<h; ++i) {
        for (int j=0; j<w; ++j) {
            cin >> v[i][j];
        }
    }

    for (int i=0; i<h-1; ++i) {
        for (int si=i+1; si<h; ++si) {
            for (int j=0; j<w-1; ++j) {
                for (int sj=j+1; sj<w; ++sj) {
                    int la = v[i][j] + v[si][sj];
                    int ra = v[si][j] + v[i][sj];

                    if ()
                }
            }
        }
    }

    return 0;
}