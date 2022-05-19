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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> cpv(n);

    for (int i=0; i<n; ++i) {
        cin >> v[i];
    }

    cpv = v;

    sort(cpv.begin(), cpv.end(), greater<int>{});
    cpv.erase(unique(cpv.begin(), cpv.end()), cpv.end());

    for(int i=0; i<n; ++i) {
        for (int j=0; j<sizeof(cpv)/sizeof(cpv[0]); ++j) {
            if (v[i] == cpv[j]) {
                cout << j << endl;
                break;
            }
        }
    }
    return 0;
}
