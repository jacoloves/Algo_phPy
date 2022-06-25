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
    int N, W;
    cin >> N >> W;
    vector<int> A(N);
    for (auto& x : A) cin >> x;

    vector<int> flag(W+1);

    for (int i = 0; i < N; i++) {
        int s = A[i];
        if (s <= W) flag[s] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int s = A[i] + A[j];
            if (s <= W) flag[s] = 1;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                int s = A[i] + A[j] + A[k];
                if (s <= W) flag[s] = 1;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= W; i++) ans += flag[i];
    cout << ans << endl;
    return 0;
}
