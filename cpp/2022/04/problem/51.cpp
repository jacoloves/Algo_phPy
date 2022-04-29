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
#include <regex> // regex
#include <sstream>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int n;
    string y, m;
    cin >> n >> y >> m;

    string ym = y + m;

    vector<string> v(n);

    for (int i=0; i<n; ++i) {
        cin >> v[i];
    }

    for (int i=0; i<n; ++i) {
        int pos = v[i].find(ym);
        if (pos > 0) {
            vector<string> v2;
            string s;
            stringstream ss{v[i]};
            while(getline(ss, s, '_')) {
                v2.push_back(s);
            }
            cout << v2[1] << endl;
        }
    }

    return 0;
}
