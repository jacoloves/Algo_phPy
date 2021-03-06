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

int factorial_calc(int n) {
    int ret_num = 1;
    for (int i=1; i<=n; i++){
        ret_num *= i;
    }

    return ret_num;
}

int main() {
    int p;
    cin >> p;

    int fact = 0;
    int f_cnt = 1;
    int ans = 0;

    while(true) {
        fact = factorial_calc(f_cnt);
        if (fact > p) {
            break;
        }
        f_cnt++;
    }

    while(true) {
        fact = factorial_calc(f_cnt);
        if (p/fact > 100) {
            ans += 100;
            p = (p%fact) + (p/fact - 100) * fact;
        } else {
            ans += p / fact;
            p = p % fact;
        }

        f_cnt--;

        if (p == 0)
            break;
    }

    cout << ans << endl;
}

