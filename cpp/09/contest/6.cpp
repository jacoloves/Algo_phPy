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
    string S1, S2, S3, S4;
    cin >> S1 >> S2 >> S3 >> S4;

    string ans = "";

    for (int i = 0; i < S4.size(); i++) {
        if (S4.at(i) == '1') {
            ans += S1;
        } else if (S4.at(i) == '2') {
            ans += S2;
        } else if (S4.at(i) == '3') {
            ans += S3;
        }
    }

    cout << ans << endl;
}

