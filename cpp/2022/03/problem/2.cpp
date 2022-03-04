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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vv(n, vector<int>(m));

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> vv[i][j];
        }
    }

    bool flg = true;

    // next number
    for (int i=0; i<m-1; ++i) {
        if (vv[0][i] + 1 != vv[0][i+1]) {
            flg = false;
            break;
        }
    }

    if (flg) {
        for (int i=0; i<m; ++i) {
            for (int j=0; j<n-1; ++j) {
                if (vv[i][j] + 7 != vv[i][j+1]) {
                    flg = false;
                    break;
                }
            }
        }
    }

    if (flg) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


    return 0;
}