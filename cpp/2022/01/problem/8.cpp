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
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);

    for(int i=0; i<n; i++) {
        cin >> x.at(i);
    }
    for(int i=0; i<n; i++) {
        cin >> y.at(i);
    }

    double p1, p2, p3, p4;

    for(int i=0; i<n; i++) {
        p1 += abs(x[i]-y[i]);
    }
    for(int i=0; i<n; i++) {
        p2 += pow(abs(x[i]-y[i]), 2);
    }
    p2 = sqrt(p2);
    for(int i=0; i<n; i++) {
        p3 += pow(abs(x[i]-y[i]), 3);
    }
    p3 = pow(p3, 1.0/3.0);
    p4 = 0.0;
    for (int i=0; i<n; i++){
        p4 = max(p4, abs((double)x[i]-y[i]));
    }

    printf("%0.05f\n", p1);
    printf("%0.05f\n", p2);
    printf("%0.05f\n", p3);
    printf("%0.05f\n", p4);
    return 0;
}
