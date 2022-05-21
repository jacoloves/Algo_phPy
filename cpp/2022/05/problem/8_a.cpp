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
#include <regex> // regex

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<pair<ll, ll>> S(N);
    for (int i=0; i<N; ++i) {
        cin >> S[i].first >> S[i].second;
    }

    sort(S.begin(), S.end());

    ll res = 0;
    for (int i=0; i<N && K>0; ++i) {
        ll num = min(K, S[i].second);

        K -= num;

        res += S[i].first * num;
    }
    cout << res << endl;
    return 0;
}
