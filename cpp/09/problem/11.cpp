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
#include <cmath> //pow

using namespace std;
typedef long long ll;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
    ll A, B, C;
    cin >> A >> B >> C;

    ll pow1, pow2;
    pow1 = pow(A,C);
    pow2 = pow(B,C);

    if (pow1 > pow2) {
        cout << ">" << endl;
    } else if(pow1 < pow2) {
        cout << "<" << endl;
    } else {
        cout << "=" << endl;
    }
}

