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
    int N;
    cin >> N;

    vector<int> S(N);
    vector<int> T(N);
    vector<int> ans(N);

    for (int i=0; i<N; i++) {
        cin >> S.at(i);
    }

    for (int i=0; i<N; i++) {
        cin >> T.at(i);
    }

    int cntS = 0;
    int cntT = 0;
    int cnt = 0;

    while(true) {
        if (cntS == 0 && cntT == 0) {
            if (S[cntS] > T[cntT]) {
                ans[cnt] = T[cntT];
                cntT++;
            }
            else {
                ans[cnt] = S[cntS];
                cntS++;
            }
        } else 
    }

    for (int i=0; i<N; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}