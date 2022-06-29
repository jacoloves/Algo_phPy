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
    int n, k, q;
    int a[202];
    int x;

    cin >> n >> k >> q;
    for (int i=1; i<=k; i++) cin >> a[i];
    a[k + 1] = n + 1;

    for (int i = 0; i< q; i++) {
        cin >> x;
        if (a[x] + 1 < a[x + 1])a[x]++;
    }

    for (int i = 1; i <= k; i++) {
        cout << a[i];
        if (i < k)cout << " ";
        else cout << endl;
    }

    return 0;
}
