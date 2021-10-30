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
    int n;
    cin >> n;

    vector<P> p(n-1);
    rep(i, n-1) {
        int a, b;
        cin >> a >> b;
        p[i] = P(a, b);
    }

    sort(p.begin(), p.end());

    bool flg = true;

    map<int, int> mp;

    rep(i, n-1) {
        mp[p[i].first]++;
        mp[p[i].second]++;
    }

    int max_num = 0;

    for (pair<int, int> p:mp) {
        max_num = max(p.second, max_num);
    }

    if (max_num != n-1) flg = false;
    
    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}