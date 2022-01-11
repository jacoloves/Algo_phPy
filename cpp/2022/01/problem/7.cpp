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
    int cnt = 0;
    vector<double> s(100);
    while(true) {
        int n;
        int sum = 0;
        cin >> n;
        if (n == 0) break;
        vector<int> v(n);
        for (int i=0; i<n; i++) {
            cin >> v.at(i);
        }
        for (int i=0; i<n; i++) {
            sum += v.at(i);
        }
        double dev = (double)sum/n;
        double a = 0.0;
        for (int i=0; i<n; i++) {
            double vans = v.at(i)-dev;
            a += pow(vans, 2);
        }

        s[cnt] = sqrt(a / n);
        cnt++;
    }

    for(int i=0; i<cnt; i++) {
        printf("%0.04f\n", s[i]);
    }
    return 0;
}
