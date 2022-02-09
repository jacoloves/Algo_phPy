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

#define mod 998244353
#define inv2 499122177

ll triangular_number(ll x) {
    x%=mod;
    ll res = x;
    res*=(x+1); res%=mod;
    res*=inv2;res%=mod;
    return res;
}

int main() {
    ll n;
    cin >> n;

    ll res=0;
    ll p10=10;
    for(int dg=1; dg<=18; dg++) {
        ll l=p10/10;
        ll r=min(n, p10-1);
        if(l<=r){res+=triangular_number(r-l+1);res%=mod;}
        p10*=10;
    }    

    cout << res << endl;

    return 0;
}