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

    vector<string> v_sei(n);
    vector<string> v_name(n);

    for (int i=0; i<n; i++) {
        cin >> v_sei[i] >> v_name[i];
    }

    map<string, int> mp;

    for (int i=0; i<n; ++i) {
        string str = v_sei[i] + " " + v_name[i];
        if(mp.find(str) != mp.end()) {
            mp[str]++;
        } else {
            mp[str]++;
        }
    }

    bool flg = false;

    for(auto i=mp.begin(); i != mp.end(); ++i) {
        if (i->second >= 2) {
            flg = true;
            break;
        }
    }

    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}