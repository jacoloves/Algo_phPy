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

void output(vector<int> A) {
    for (int i=0; i<A.size(); i++) {
        cout << A[i];
        if (i!=A.size()-1) cout << " ";
        else cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }

    for (int lp=0; lp<n; lp++) {
        bool flag = false;
        for (int i=0; i<n-1; i++) {
            if (v[i]>v[i+1]) {
                flag= true;
                swap(v[i], v[i+1]);
            }
        }

        if (flag) output(v);
        else break;
    }

    return 0;
}
