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

const int mod = 1000000007;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector dp(n+1, vector<int>(9));
    rep(i, n+1) dp[i][0] = 1;
    string t = "chokudai";
    rep(i,n)rep(j,8) {
        if (s[i] != t[j]) {
            dp[i+1][j+1] = dp[i][j+1];
        } else {
            dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % mod;
        }
    }
    cout << dp[n][8] << endl;

    return 0;
}