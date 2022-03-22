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

#define N 200100
#define MOD 998244353

ll t[N];
int k[N];
vector<int>e[N];
bool used[N];

int main() {
    int n, x;
    ll ans = 0;
    rep(i, N)used[i] = false;

    cin >> n;
    rep(i, n) {
        cin >> t[i];
        cin >> k[i];
        rep(j, k[i]) {
            cin >> x;
            e[i].push_back(x - 1);
        }
    }

    used[n - 1] = true;
    for (int i=n-1; i >= 0; i--){
        if (used[i]) {
            ans += t[i];
            rep(j, k[i]) {
                used[e[i][j]] = true;
            }
        }
    }

    cout << ans << endl;

    return 0;
}