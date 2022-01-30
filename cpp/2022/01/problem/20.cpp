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
    string s1, s2, s3;

    cin >> s1;
    cin >> s2;
    cin >> s3;

    map<string, int> mp;

    if (mp.find(s1) != mp.end()) {
       mp[s1]++;
    } else {
        mp[s1]++;
    }

    if (mp.find(s2) != mp.end()) {
       mp[s2]++;
    } else {
        mp[s2]++;
    }

    if (mp.find(s3) != mp.end()) {
       mp[s3]++;
    } else {
        mp[s3]++;
    }



    return 0;
}