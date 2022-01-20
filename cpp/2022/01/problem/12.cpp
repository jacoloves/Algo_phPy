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
    int S, T;
    cin >> S >> T;

    int cnt = 0;

    for (int a=0; a<=S; ++a) {
        for (int b=0; a+b<=S; ++b) {
            for (int c=0; a+b+c<=S; c++) {
                if (a*b*c <= T) {
                    cnt ++;
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;
}