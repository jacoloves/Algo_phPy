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
#include <cmath> // sqrt, pow, sin, fabs, cos

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int N, M; cin >> N >> M;
    vector<string> vec_N(N), vec_M(M);

    for (int i=0; i<N; ++i) {
        cin >> vec_N[i];
    }

    for (int i=0; i<M; ++i) {
        cin >> vec_M[i];
    }

    map<string, int> mp;

    for (int i=0; i<N; i++) {
        if (mp.find(vec_N[i]) != mp.end()) {
           mp[vec_N[i]]++;
        } else {
            mp[vec_N[i]]++;
        }
    }

    for (int i=0; i<M; i++) {
        mp[vec_M[i]]++;
    }

    for (int i=0; i<N; i++) {
        if (mp[vec_N[i]] >= 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
