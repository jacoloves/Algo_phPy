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

    vector<int> data(N);
    rep(i, N) {
        cin >> data.at(i);
    }

    map<int, int> score;

    rep(i, N) {
        if(score.count(data.at(i))){
            score.at(data.at(i))++;
        }
        else {
            score[data.at(i)] = 1;
        }
    }

    int mc = 0;
    int ans = -1;

    for (auto x : data) {
        if (mc < score.at(x)) {
            mc = score.at(x);
            ans = x;
        }
    }

    cout << ans << " " << mc << endl;
}
