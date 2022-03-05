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

const int mod = 998244353;

int main() {
    int n;
    cin >> n;

    ll ans = 0;
    int tmp = 0;
    // for (int h=1; h<=9; ++h) {
    //     for (int i = 0; i<n; ++i) {
    //         for (int j=1; j<=9; j++) {
    //             if (i != 0) {
    //                 if (tmp ) {
    //                     ans *= 10;
    //                     ans += j;
    //                 } else {
    //                     continue
    //                 }
    //             } else {
    //                 ans += h;
    //                 tmp = h;
    //                 break;
    //             }
    //         }
    //     }
    // }

    for (int i=1; i<=9; ++i) {
        for (int j=1; j<=9; ++j) {
            for(int k=0; k<n; ++k) {
                if (k != 0) {
                    if (abs(tmp - j))
                } else {
                    ans += i;
                    tmp = i;
                    break;
                }
            }
        }
    }

    return 0;
}