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
    int a, b, C;
    cin >> a >> b >> C;

    // circle L calculate
    double L;
    L =  a + b + sqrt(pow(a,2) + pow(b,2) - 2 * a * b * cos(C));

    // area S calculate
    double S;
    S = a * b * sin(C) / 2;

    // height h calculate
    double h;
    h = b * sin(C);

    printf("%0.4f\n", S);
    printf("%0.4f\n", L);
    printf("%0.4f\n", h);

    return 0;
}
