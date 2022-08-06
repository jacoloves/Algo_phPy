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
    int vec[5];

    for (int i=0; i<5; i++) {
        cin >> vec[i];
    }

    bool flg_3 = false;
    bool flg_2 = false;
    
    for (int i=1; i<=13; i++) {
        int ans = 0;
        for (int j=0; j<5; j++) {
            if (vec[j] == i) ans++;
        }

        if (ans == 3) flg_3 = true;
        else if (ans == 2) flg_2 = true;
    }

    if (flg_2 && flg_3) cout << "Yes" << endl;
    else cout << "No" << endl;
}
