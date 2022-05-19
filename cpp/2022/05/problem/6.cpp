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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; ++i) cin >> v[i];
    
    map<int, int> mp;
    for (int i=0; i<v.size(); ++i) {
        mp[i] = 0;
    }

    for (int i=0; i<v.size(); ++i) {
        mp[v[i]]++;
    }

    map<int, int> mp2;

    for (const auto & [key, value] : mp) {
        mp2.emplace(value, key);
    }

    for (auto iter=mp2.begin(); iter != mp2.end(); iter++) {
        cout << iter->first << " " << iter->second << endl;
    }
    return 0;
}
