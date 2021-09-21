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
    string X;
    cin >> X;
    vector<int> pos(26);
    for (int i=0; i<26; ++i) {
        pos[X[i]-'a'] = i;
    }
    int N;
    cin >> N;
    vector<vector<int>> S(N);
    for (vector<int>& v : S) {
        string s;
        cin >> s;
        for (const char c : s) {
            v.push_back(pos[c-'a']);
        }
    }
    sort(begin(S), end(S));
    for (const vector<int>& s : S) {
        for (const int x : s) {
            cout << X[x];
        }
        cout << '\n';
    }
    return 0;
}

