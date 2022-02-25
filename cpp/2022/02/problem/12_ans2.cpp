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

    double t = 0;
    for (int i=0; i<n; ++i) {
        t += a[i]/b[i];
    }
    t /= 2;
    double ans = 0;
    for (int i=0; i<n; ++i) {
        double nt = a[i]/b[i];
        if (nt > t) {
            ans += b[i]*t;
            break;
        }
        ans += a[i];
        t -= nt;
    }

    printf("%.10f\n", ans);

    return 0;
}