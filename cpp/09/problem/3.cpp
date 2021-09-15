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
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);

    rep(i, N) {
        cin >> A.at(i);
    }

    rep(i, N) {
        cin >> B.at(i);
    }

    rep(i, N) {
        cin >> C.at(i);
    }

    int cnt = 0;
    int num_length = 0;

    while(true) {
        if (num_length == N) {
            break;
        }
        rep(i, N) {
            if (A.at(num_length) == B.at(C.at(i)-1)) {
                cnt++;
            }
            
        }
        
        num_length++;
    }

    cout << cnt << endl;
}

