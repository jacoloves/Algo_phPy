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
#include <regex> // regex

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int k, n;
    cin >> k >> n;
    vector<int> A(k);
    vector<int> B(n);

    for (int i=0; i<k; i++) {
        cin >> A[i];
    }
    for (int i=0; i<n; i++) {
        cin >> B[i];
    }

    int max_cnt = -1000000000;
    
    for (int i=0; i<k; i++) {
        max_cnt = max(max_cnt, A[i]);
    }
    
    bool flg = false;
    for (int i=0; i<n; i++) {
        if (max_cnt == A[B[i]-1]) flg = true;
    }

    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
