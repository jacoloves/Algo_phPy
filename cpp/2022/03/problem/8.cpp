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
    ll n, cnt = 0;
    cin >> n;
    for (ll a=1; a*a*a<=n; ++a) {
        for (ll b=a; a*b*b<=n; ++b) {
            ll uc;
            for (ll c=max(b, (n/(a*b))-5);;++c) {
                if (a*b*c<=n){uc=c;}else{break;}
            }
            cnt += (uc-b+1);
        }
    }
    cout << cnt << endl;
    return 0;
}