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
    pair<int, int> a(3, 1);
    pair<int, int> b(2, 10);

    if (a<b) {
        cout << "a < b" << endl;
    }
    else {
        cout << "a >= b" << endl;
    }

    pair<int, int> c(5, 1);
    pair<int, int> d(5, 10);

    if (c < d) {
        cout << "c < d" << endl;
    }
    else {
        cout << "c >= d" << endl;
    }
}

