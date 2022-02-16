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
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll x;
    cin >> x;

    ll sum=0;
    rep(i, n) {
        sum += a[i];
    } 

    ll cnt = 0; // answer
    //ll cmp = 0; //compare

    // while(true) {
    //     if (cmp >= x) break;
    //     cmp += sum;
    //     cnt += n;
    // }

    cnt = x/sum;
    ll ans = cnt*n;
    ll now = cnt*sum;
    rep(i, n) {
        now += a[i];
        ans++;
        if (now > x) break;

    }

    // if (cmp > x) {
    //     for (int i=n-1; i>0; --i) {
    //         cmp -= a[i];
    //         if (cmp < x) break;
    //         cnt--;
    //     }
    // }

    cout << ans << endl;

    return 0;
}