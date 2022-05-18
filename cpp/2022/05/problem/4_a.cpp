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
    int n, k;
    cin >> n >> k;
    vector<ll> A(n);
    for (int i=0; i<n; ++i) cin >> A[i];

    sort(A.begin(), A.end());

    ll result = 1LL << 60;

    for (int i=0; i + k - 1 < n; ++i) {
        ll diff = A[i+k-1]-A[i];

        result = min(result, diff);
    }
    cout << result << endl;
    return 0;
}
