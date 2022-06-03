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
    int h, w;
    cin >> h >> w;
    vector<string> v(h);

    for (int i=0; i<h; i++) {
        cin >> v[i];
    }

    int koma_cnt = 0;
    P fkp, skp;
    for (int i=0; i<h; i++) {
        string tmp_str = v[i];
        for (int j=0; j<w; j++) {
            if (tmp_str[j] == 'o') {
                koma_cnt++;
                if (koma_cnt == 1) {
                   fkp.first = j;
                   fkp.second = i;
                } else if (koma_cnt == 2) {
                   skp.first = j;
                   skp.second = i;
                }
            }

        }
        if (koma_cnt == 2) break;
    }

    int ans = abs(skp.first - fkp.first) + abs(skp.second - fkp.second);
    cout << ans << endl;
    return 0;
}
