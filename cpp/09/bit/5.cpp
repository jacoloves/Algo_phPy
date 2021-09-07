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

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    rep(i, n) {
        cin >> v.at(i);
    }

    bool ans = false;

    for (int tmp=0; tmp < (1 << 20); tmp++) {
        bitset<20> s(tmp);

        int sum=0;
        for (int i=0; i<n; i++) {
            if (s.test(i)) {
                sum += v.at(i);
            }
        }
        if (sum == k) {
            ans = true;
        }
    }

    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

