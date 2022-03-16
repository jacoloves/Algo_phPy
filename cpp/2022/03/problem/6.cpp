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
#include <cmath>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i=0; i<n; ++i) {
        cin >> v[i];
    }

    int cnt = 0;

    for (int i=0; i<n; ++i) {
        bool flg = false;
        for (int a=1; a<=1000; ++a) {
            for (int b=1; b<=1000; ++b) {
                if ((4*a*b + 3*a + 3*b) == v[i]) {
                    flg = true;
                    cnt++;
                }
                if (flg) break;
            }
            if (flg) break;
        }
    }

    cout << n - cnt << endl;

    return 0;
}