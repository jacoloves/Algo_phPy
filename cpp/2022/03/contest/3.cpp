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

    const int MOD = 998244353;
    int dp[1000005][10];
    void add(int& x, int y) {
        x += y;
        x %= MOD;
    }

    int main() {
        int n;
        cin >> n;

        for(int d=1; d<=9; d++) dp[1][d] = 1;
        for(int i=2; i<=n; i++) {
            for(int d=1; d<=9; d++) {
                if (d-1 >= 1) add(dp[i][d], dp[i-1][d-1]);
                add(dp[i][d], dp[i-1][d]);
                if (d+1 <= 9) add(dp[i][d], dp[i-1][d+1]);
            }
        }

        int ans = 0;
        for (int d=1; d<=9; d++) add(ans, dp[n][d]);
        cout << ans << endl;

        return 0;
    }