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
    vector<tuple<int, int, int>> a;
    a.push_back(make_tuple(3, 1, 1));
    a.push_back(make_tuple(1, 2, 100));
    a.push_back(make_tuple(3, 5, 1));
    a.push_back(make_tuple(1, 2, 3));
    sort(a.begin(), a.end());

    for (tuple<int, int, int> t : a) {
        int x, y, z;
        tie(x, y, z) = t;
        cout << x << " " << y << " " << z << endl;
    }
}

