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
#include <cmath> // sqrt 

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> a(k);
    for(auto &nx : a) {
        cin >> nx;
        nx--;
    }
    vector<ll> x(n),y(n);
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    ll res = 0;
    for (int i=0; i<n; i++) {
        ll cres = 8e18;
        for (auto &nx : a) {
            cres = min(cres, (x[i]-x[nx]) * (x[i]-x[nx]) + (y[i]-y[nx])*(y[i]-y[nx]));
        }
        res=max(res,cres);
    }
    printf("%.12lf\n", sqrt((double)res));
    return 0;
}
