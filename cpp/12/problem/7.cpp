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
    int a, b, c;
    cin >> a >> b >> c;
    int m1, m2, m3;

    m1 = min(a, b);
    m1 = min(m1, c);
    if (m1 == a) {
        m2 = min(b, c);
        if (m2 == b){
            m3 = c;
        } else {
            m3 = b;
        }
    } else if (m1 == b){
        m2 = min(a, c);
        if (m2 == a){
            m3 = c;
        } else {
            m3 = a;
        }
    } else if (m1 == c) {
        m2 = min(a, b);
        if (m2 == a) {
            m3 = b;
        } else {
            m3 = a;
        }
    }

    cout << m1 << " " << m2 << " " << m3 << endl;

    return 0;
}