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

int h[3], w[3], a[3][3];
ll ans = 0;

void dfs(int ij) {
    int i= ij/3, j = ij%3;
    if (i == 3) {
        ans++;
        return;
    }
    if (i == 2) {
        int x = w[j]  - a[0][j] - a[1][j];
        if (x <= 0) return;
        a[i][j] = x, dfs(ij + 1);
    } else if (j == 2) {
        int x = h[i] - a[i][0] - a[i][1];
        if (x <= 0) return;
        a[i][j] = x, dfs(ij + 1);
    } else {
        for (int x = 1; x <= 30; x++) a[i][j] = x, dfs(ij + 1);
    }
}
int main() {
    for (int i = 0; i < 3; i++)  cin >> h[i];
    for (int j = 0; j < 3; j++)  cin >> w[j];
    if (h[0] + h[1] + h[2] != w[0] + w[1] + w[2]) {
        cout << 0 << endl;
        return 0;
    }
    dfs(0);
    cout << ans << endl;
    return 0;
}
