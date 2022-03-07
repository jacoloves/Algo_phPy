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
    vector<vector<int>> b(n, vector<int>(m));
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            cin >> b[i][j];
        }
    }
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            b[i][j]--;
        }
    }
    int si = b[0][0]/7;
    int sj = b[0][0]%7;
    if (sj+m-1 >= 7) {
        cout << "No" << endl;
        return 0;
    }

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            int nb = (si + i)*7 + (sj+j);
            if (b[i][j] != nb) {
               cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}