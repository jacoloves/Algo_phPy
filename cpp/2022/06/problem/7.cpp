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

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int q;
    cin >> q;
    multiset<int> st;
    while(q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            st.insert(x);
        } else if (t == 2){
            int x, c;
            cin >> x >> c;
            while (c-- and st.find(x) != st.end()) {
                st.erase(st.find(x));
            }
        } else {
            cout << *st.rbegin() - *st.begin() << endl;
        }
    }
    return 0;
}
