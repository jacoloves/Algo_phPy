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
    vector<int> A(N), B(N), C(N);

    for (auto& x : A) {
        cin >> x;
        x -= 1;
    }

    for (auto& x : B) {
        cin >> x;
        x -= 1;
    }

    for (auto& x : C) {
        cin >> x;
        x -= 1;
    }

    vector<int> count(N);
    for (int j = 0; j < N; ++j) {
        count[B[C[j]]] += 1;
    }
    ll ans = 0;
    for (int i = 0; i < N; ++i) {
        ans += count[A[i]];
    }

    cout << ans << endl;
}

