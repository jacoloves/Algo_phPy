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
    ll n,k;
    cin >> n >> k;
    vector<ll>a(n+1),b(n+1);
    for (ll i=1; i<=n; ++i) cin >> a[i];
    for (ll i=1; i<=n; ++i) cin >> b[i];

    vector<ll>dp(n+1,false), ep(n+1, false);

    dp[1]=ep[1]=true;

    for(ll i=2; i<=n; ++i){
        if(dp[i-1]){
            if(abs(a[i-1]-a[i])<=k)dp[i]=true;
            if(abs(a[i-1]-b[i])<=k)ep[i]=true;
        }
        if(ep[i-1]){
            if(abs(b[i-1]-a[i])<=k)dp[i]=true;
            if(abs(b[i-1]-b[i])<=k)ep[i]=true;
        }
    }

    if(dp[n]||ep[n]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}