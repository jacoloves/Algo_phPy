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
#include <cmath> // sqrt, pow, sin, fabs, cos

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    cout << "Start Game!" << endl;

    int left = 20, right = 36;

    while(right - left > 1) {
        int mid = left + (right - left) / 2;

        cout << "Is the age same pr more than " << mid << " ? (yes / no)" << endl;
        string ans;
        cin >> ans;

        if (ans == "yes") left = mid;
        else right = mid;
    }

    cout << "The age is " << left << "!" << endl;
    return 0;
}
