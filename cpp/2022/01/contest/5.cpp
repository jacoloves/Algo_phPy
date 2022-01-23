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
#include <cmath> // sqrt, pow, sin, fabs, cos

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int N;
    cin >> N;
    map<int, int> mp;

    for(int i=0; i<4*N-1; i++) {
        int a;
        cin >> a;
        if (mp.find(a) != mp.end()) {
           mp[a]++;
        } else {
            mp[a]++;
        }
    }

    for (auto i = mp.begin(); i != mp.end(); ++i) {
        // cout << i->first << " : " << i->second << endl;
        if (i->second == 3) {
             cout << i->first << endl;
             break;
        }
    }

    return 0;
}
