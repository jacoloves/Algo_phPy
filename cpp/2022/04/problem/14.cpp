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
     int n, m, k;
    cin >> n >> m >> k;
    vector<int> nv(n);
    vector<int> mv(m);

    for (int i=0; i<n; ++i) {
        cin >> nv[i];
    }
    
    for (int i=0; i<m; ++i) {
        cin >> mv[i];
    }

    int cnt = 0;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            if (nv[i] + mv[j] == k) cnt++; 
        }
    }

    cout << cnt << endl;

    return 0;
}