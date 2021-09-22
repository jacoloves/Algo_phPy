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
    int N, M;
    cin >> N >> M;
    if (M == 0) {
        cout << N << endl;
    } else {
        vector<int> v(M);
        vector<int> v2(M);

        int cnt = 0;

        for (int i=0; i<M; i++) {
            cin >> v.at(i) >> v2.at(i);
        }

        sort(v2.begin(), v2.end());
        v2.erase(unique(v2.begin(), v2.end()), v2.end());

        for (int i=0; i<M; i++) {
            for (auto it = v2.begin(); it != v2.end(); ++it) {
                if (v.at(i) != *it) {
                    cnt++;
                }
            }
        }

        cout << cnt+N << endl;
    }
}

