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
    vector<double> a(n), b(n);
    for (int i=0; i<n; ++i) {
        cin >> a[i] >> b[i];
    }

    int li = 0, ri = n-1;
    double lx = 0, rx = 0;
    double ans = 0;

    while (li < ri) {
        double lt = (a[li]-lx)/b[li];
        double rt = (a[ri]-rx)/b[ri];
        if (lt < rt) {
            ans += b[li]*lt;
            lx = 0;
            rx += b[ri]*lt;
            li++;
        } else {
            ans += b[li]*rt;
            rx = 0; lx += b[li]*rt;
            ri--;
        }
    }

    ans += (a[li]-lx-rx)/2;
    printf("%.10f\n", ans);
    return 0;
}