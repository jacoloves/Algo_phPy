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

int main() {
    int N;
    cin >> N;
    vector<vector<int>> vv1(N, vector<int>(N));
    vector<vector<int>> vv2(N, vector<int>(N));

    vector<vector<int>> vv_90(N, vector<int>(N));

    rep(i, N) {
        rep(j, N) {
            cin >> vv1.at(i).at(j);
        }
    }

    rep(i, N) {
        rep(j, N) {
            cin >> vv2.at(i).at(j);
        }
    }

    int vv_height = 0;
    int height = 0;

    int vv_width = 0;
    int width = 0;

    // height
    bool start_height_count = false;
    rep(i, N) {
        rep(j, N) {
            if (vv2.at(i).at(j) == '#') start_height_count = true;
        }
        if (start_height_count) vv_height++;
    }

    rep(i, N) {
        rep(j, N) {
            if (vv2.at(i).at(j) == '#') start_height_count = true;
        }
        if (start_height_count) height++;
    }

    rep(i, N) {
        int cnt = 0
        for (int j = N-1; j < 0; --j) {
            vv_90.at(i).at(cnt) = vv2.at(i).at(2);
        }
    }
}

