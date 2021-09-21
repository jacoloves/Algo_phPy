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
    for (string& s : S) {
        cin >> s;
    }
    sort(begin(S), end(S), [&](const string& s, const string& t) {
        int len = min(size(s), size(t));
        for (int i=0; i<len; ++i) {
            if (s[i] != t[i]) {
                return pos[s[i]-'a'] < pos[t[i] - 'a'];
            }
        }
        return size(s) < size(t);
    });
    for (const string& s : S) {
        cout << s << '\n';
    }
}

