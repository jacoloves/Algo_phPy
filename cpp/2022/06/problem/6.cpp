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

int main() {
    int N,K;
    cin >> N >> K;

    vector<vector<int>> b(K);

    vector<int> a(N);
    for (int i=0; i<N; i++) {
        cin>>a[i];
        b[i%K].push_back(a[i]);
    }

    for (int i=0;i<K;i++){
        sort(b[i].begin(), b[i].end(), greater<int>());
    }

    sort(a.begin(), a.end());

    vector<int> na;
    for(int i=0; i<N; i++) {
        na.push_back(b[i%K].back());
        b[i%K].pop_back();
    }

    if (a == na) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
