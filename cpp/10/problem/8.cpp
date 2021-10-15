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
using P = pair<int, int>;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> vec(n);

    rep(i, n){
        cin >> vec[i];
    }

    int cnt  = 0;

    rep(i, n) {
        if ((i+1) % 2 == 0)
            vec[i] -= 1;
        cnt += vec[i];
    }

    if (x < cnt) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}

