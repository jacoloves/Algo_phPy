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
    string str1, str2, str3, str4;

    cin >> str1 >> str2 >> str3 >> str4;

    map<string, int> mp;
    mp["H"] = 0;
    mp["2B"] = 0;
    mp["3B"] = 0;
    mp["HR"] = 0;

    mp[str1]++;
    mp[str2]++;
    mp[str3]++;
    mp[str4]++;

    if (mp["H"] == 1 && mp["2B"] == 1 && mp["3B"] == 1 && mp["HR"] == 1)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    return 0;
}