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

int main() {
    int N;
    cin >> N;

    vector<tuple<string, int, int>> tv;

    string str;
    int p;

    rep(i, N) {
        cin >> str >> p;
        tv.push_back(make_tuple(str, p, i+1));
    }

    sort(tv.begin(), tv.end());

    vector<int> vp, vn;
    vector<string> vs;

    for (auto elem : tv) {
        string estr;
        int ep, en;
        
        tie(estr, ep, en) = elem;
        vs.push_back(estr);
        vp.push_back(ep);
        vn.push_back(en);
    }

    int tmp_p, tmp_n;
    string tmp_str;

    rep(i, N-1) {
        for (int j = i+1; j < N; j++) {
            if (vs.at(i) == vs.at(j)) {
                if (vp.at(i) < vp.at(j)) {
                    // i -> tmp
                    tmp_str = vs.at(i);
                    tmp_p = vp.at(i);
                    tmp_n = vn.at(i);

                    // j -> i
                    vs.at(i) = vs.at(j);
                    vp.at(i) = vp.at(j);
                    vn.at(i) = vn.at(j);

                    // tmp -> j
                    vs.at(j) = tmp_str;
                    vp.at(j) = tmp_p;
                    vn.at(j) = tmp_n;
                }
            }
        }
    }

    rep(i, N) {
        cout << vn.at(i) << endl;
    }
}

