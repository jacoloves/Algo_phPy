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

bool operator<(pair<int, int> l, pair<int, int> r) {
    if (l.second != r.second) {
        return l.second < r.second;
    } else {
        return l.first < r.first;
    }
}

bool operator> (pair<int, int> l , pair<int, int> r) { return r < l; }
bool operator<=(pair<int, int> l , pair<int, int> r) { return !(r < l); }
bool operator>=(pair<int, int> l , pair<int, int> r) { return !(l < r); }

int main() {
    pair<int, int> a = {1, 5};
    pair<int, int> b = {3, 2};
    cout << (a < b) << endl;
    cout << (a > b) << endl;
}

