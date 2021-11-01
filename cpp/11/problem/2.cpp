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
    string str;
    cin >> str;

    string str2 = "";

    bool flg = true;

    rep(i, 4) {
        str2 += str[0];
    }

    if (str == str2) flg = false;

    if (flg) {
        int num = str[0] - '0';
        int cnt = 0;

        for (int i=1; i<4; i++) {
            num++;
            if (num == 10) num=0;
            int num2 = str[i] - '0';
            if (num2  == num) cnt++;
        } 

        if (cnt == 3) flg = false;
    }

    if (flg) cout << "Strong" << endl;
    else cout << "Weak" << endl;

    return 0;
}