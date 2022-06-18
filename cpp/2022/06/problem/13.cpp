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
    int n;
    string s[100];
    int cnt[10][10];
    int ans, mx;
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++) cnt[i][j] = 0;
    } 

    cin >> n;

    for (int i=0; i<n; i++) cin >> s[i];

    for (int i=0; i<n; i++) {
        for (int j=0; j<10; j++) {
            cnt[(s[i][j] - '0')][j]++;
        } 
    }

    ans = 1000;
    for (int i=0; i<10; i++) {
        mx = 0;
        for (int j=0; j<10; j++) {
            mx = max(mx, 10 * (cnt[i][j] - 1) + j);
        }
        ans = min(ans, mx);
    }

    cout << ans << endl;
    return 0;
}
