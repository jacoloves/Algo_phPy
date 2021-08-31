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

pair<int, int> operator+(pair<int, int> a, pair<int, int> b) {
    pair<int, int> ret;
    ret.first = a.first + b.first;
    ret.second = a.second + b.second;
    return ret;
}

int main() {
    pair<int, int> a = {1, 2};
    pair<int, int> b = {3, 4};
    auto c = a + b;
    cout << c.first << ", " << c.second << endl;
}

