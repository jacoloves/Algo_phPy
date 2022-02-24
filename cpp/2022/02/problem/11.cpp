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

    string chg = "";
    string minS = "";
    string maxS = "";

    for (int i=0; i<str.length(); i++) {
        int cnt = 0;
        for (int j=i; j<str.length()*2-1; j++) {
            if (cnt == str.length()) break;
            if (j >= str.length()) j = j - str.length();
            chg = chg + str[j];
            cnt++;
        }
        // compare
        if (minS == "" && maxS == "") {
            minS = chg;
            maxS = chg;
        } else {
            if (chg < minS) minS = chg;
            if (chg > maxS) maxS = chg;
        }
        chg = "";
    }

    cout << minS << endl;
    cout << maxS << endl;

    return 0;
}