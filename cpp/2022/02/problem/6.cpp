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
    string N; cin >> N;
    sort(N.begin(), N.end());
    int ans = 0;
    do {
        for (int i=1; i<N.size(); ++i){
            string l = "", r = "";
            for (int j=0; j<i; ++j) l += N[j];
            for (int j=i; j<N.size(); ++j) r += N[j];
            if (l[0]=='0' || r[0]=='0') continue;
            ans = max(ans, stoi(l)*stoi(r));
        }
    }while(next_permutation(N.begin(), N.end()));
    cout << ans << endl;

    return 0;
}