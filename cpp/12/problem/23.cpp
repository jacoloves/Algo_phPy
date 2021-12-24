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
    int n, m, l;
    cin >> n >> m >> l;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(m, vector<int>(l));

    vector<vector<int>> ans(n, vector<int>(l));

    // a
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    // b
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < l; ++j){
            cin >> b[i][j];
        }
    }

    // ans
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < l; ++j){
            for(int k = 0; k < m; ++k){
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < l; ++j){
            if (j != l-1) cout << ans[i][j] << " ";
            else cout << ans[i][j];
        }

        cout << endl;
    }

    return 0;
}