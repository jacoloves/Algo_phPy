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
    int n, x, ans;
    string s;
    vector<pair<int, char>>a;
    cin >> n;
    cin >> s;
    ans = 0;
    for (int i=0; i<n; i++) {
        cin >> x;
        a.push_back({x,s[i]});
        if(s[i] == '1')ans++;
    }
    sort(a.begin(), a.end());
    x = ans;
    for (int i=0; i<n; i++) {
        if (a[i].second == '1')x--;
        else x++;
        if (i < (n-1)) {
            if (a[i].first != a[i+1].first)ans = max(ans, x);
        }
        else ans = max(ans,x);
    }
    cout << ans << endl;
    return 0;
}
