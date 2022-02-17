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

    int cnt = 0;

    int calc = N;
    if (N != 0) {
        while(N > 0) {
            N /= 10;
            cnt++;
        }
    } else {
        cnt = 1;
    }

    

    string ans;

    if (cnt == 1) {
        ans = "000" + to_string(calc);
    } else if (cnt == 2) {
        ans = "00" + to_string(calc);
    } else if (cnt == 3) {
        ans = "0" + to_string(calc);
    } else {
        ans = to_string(calc);
    }

    cout << ans << endl;

    return 0;
}