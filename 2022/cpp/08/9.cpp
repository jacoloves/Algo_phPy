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
    int h1, w1;
    cin >> h1 >> w1;
    vector<vector<int>> a(h1, vector<int>(w1));
    for (int i=0; i<h1; i++){
        for (int j=0; j<w1; j++) {
            cin >> a[i][j];
        }
    }
    int h2, w2;
    vector<vector<int>> b(h2, vector<int>(w2));
    for (int i=0; i<h2; i++) {
        for (int j=0; j<w2; j++) {
            cin >> b[i][j];
        }
    }

    for (int hs=0; hs<1<<h1; hs++) {
        for (int ws=0; ws<1<<w1; ws++) {
            vector<int> is, js;
            for(int i=0; i<h1; i++) {
                if (hs>>i&1) is.push_back(i);
            }
            for(int j=0; j<w1; j++) {
                if (ws>>j&1) js.push_back(j);
            }
            if (is.size() != h2) continue;
            if (js.size() != w2) continue;
            vector<vector<int>> c(h2, vector<int>(w2));
            for (int i=0; i<h2; i++) {
                for (int j=0; j<w2; j++) {
                    c[i][j] = a[is[i]][js[j]];
                }
            }
            if (b == c) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl; 
    return 0;
}
