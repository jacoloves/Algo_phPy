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
    vector<int> v(3);
    rep(i, 3) {
        cin >> v.at(i);
    }

    int cnt = 0;

    rep(i, 3) {
        if (v.at(i) == 1) {
            cnt += 6;
        } else if(v.at(i) == 2) {
            cnt += 5;
        } else if(v.at(i) == 3) {
            cnt += 4;
        } else if(v.at(i) == 4) {
            cnt += 3;
        } else if(v.at(i) == 5) {
            cnt += 2;
        } else if(v.at(i) == 6) {
            cnt += 1;
        }
    }

    cout << cnt << endl;
}

