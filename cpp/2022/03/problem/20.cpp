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

    if (str1[0] == '#' && str1[1] == '#') cout << "Yes" << endl;
    else if (str1[0] == '#' && str2[0] == '#') cout << "Yes" << endl;
    else if (str1[1] == '#' && str2[1] == '#') cout << "Yes" << endl;
    else if (str2[0] == '#' && str2[1] == '#') cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}