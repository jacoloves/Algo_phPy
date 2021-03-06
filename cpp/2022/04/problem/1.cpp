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
#include <cmath>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    char first_c = str1[0];
    char second_c = str2[0];

    int diff_num = second_c - first_c;

    if (diff_num < 0) diff_num += 26;

    bool flg = true;
    for (int i=1; i<str1.length(); i++) {
        if (str1[i] + diff_num > 'z') {
            if (char(str1[i] - 26 + diff_num) != str2[i]) {
                flg = false;
                break;
            }
        } else {
            if (char(str1[i] + diff_num) != str2[i]) {
                flg = false;
                break;
            }
        }
    }

    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}