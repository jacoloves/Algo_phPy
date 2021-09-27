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

int main() {
    int N;
    cin >> N;

    vector<int> vec(N);
    vector<int> vec2(N);

    for (int i=0; i<N; i++) {
        cin >> vec.at(i);
    }

    for (int i=0; i<N; i++) {
        vec2.at(i) = i+1;
    }

    sort(vec.begin(), vec.end());

    int flg = true;
    for (int i=0; i<N; i++) {
        if (vec.at(i) != vec2.at(i)) {
            flg = false;
            break;
        }
    }

    if (flg) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

