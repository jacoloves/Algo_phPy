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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    ll blue = a;
    ll red = 0;
    ll cnt = 0;
    bool not_div_flg = false;

    while(true) {
        if (cnt == 0 && (b >= c*d)) {
            not_div_flg = true;
            break;
        }
        
        if (blue <= red*d) {
            break;
        } else {
            blue += b;
            red += c;
            cnt++;
        }
    }

    if (not_div_flg) {
        cout << -1 << endl;
    } else {
        cout << cnt << endl;
    }
}

