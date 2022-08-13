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
    int w1, w2, h1, h2;
    cin >> h1 >> w1;

    vector<vector<ll>> vv1(h1, vector<ll>(w1));

    for (int i=0; i<h1; i++) {
        for (int j=0; j<w1; j++) {
            cin >> vv1[i][j];
        }
    }

    cin >> h2 >> w2;

    vector<vector<ll>> vv2(h2, vector<ll>(w2));

    for (int i=0; i<h2; i++) {
        for (int j=0; j<w2; j++) {
            cin >> vv2[i][j];
        }
    }
  
    int height_cnt = 0;
    int weight_cnt = 0;
    for (int i=0; i<h1; i++){
        for (int j=0; j<w1; j++) {
            if (vv1[i][j] == vv2[height_cnt][weight_cnt]) {
                weight_cnt++;
            }
            if (w2 == weight_cnt) {
                height_cnt++;
                if (h2 != height_cnt) weight_cnt = 0;
                break;
            }
        }
        if (h2 == height_cnt && w2 == weight_cnt) break;
    }

    if (h2 == height_cnt && w2 == weight_cnt) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
