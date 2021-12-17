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
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);

    rep(i, n){
        cin >> v1.at(i);
    }

    int j = 0;
    for(int i=n-1; i>=0; i--){
        v2[j] = v1[i];
        j++;
    }
    
    for (int i = 0; i < n; i++) {
        if (i == n-1) {
            cout << v2[i];
        } else {
            cout << v2[i] << " ";
        }
    }

    cout << endl;

    return 0;
}