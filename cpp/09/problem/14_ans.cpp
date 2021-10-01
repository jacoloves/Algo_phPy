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
#include <cassert> //assert

using namespace std;
typedef long long ll;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
    ll n;
    cin >> n;

    vector<int> a(n);
    for(auto &nx : a){cin >> nx;}
    ll res1=(n*(n-1)/2), res2=0;

    map<int, ll> mp;
    for(int i=0;i<n;i++){mp[a[i]]++;}
    for(int i=0;i<n;i++){res2+=(n-mp[a[i]]);}
    res2/=2;

    sort(a.begin(),a.end());
    a.push_back(-1);
    ll cnt = 1;
    for(int i=0;i<n;i++) {
        if(a[i]!=a[i+1]){
            res1-=((cnt*(cnt-1))/2);
            cnt=1;
        }
        else{cnt++;}
    }
    assert(res1==res2);
    cout << res1 << '\n';
    //cout << res2 << '\n';
}

