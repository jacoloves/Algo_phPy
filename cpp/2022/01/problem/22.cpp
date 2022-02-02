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

vector<string> trim(vector<string> X) {
    int N = static_cast<int>(X.size());
    int min_r = 1LL << 60;
    int max_r = 0;
    int min_c = 1LL << 60;
    int max_c = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if(X.at(i).at(j) == '#') {
                min_r = min(min_r, i);
                max_r = max(max_r, i);
                min_c = min(min_c, j);
                max_c = max(max_c, j);
            }
        }
    }
    vector<string> trimed_x;
    for(int i=min_r; i<=max_r; i++) {
        trimed_x.push_back(X.at(i).substr(min_c, max_c - min_c + 1));
    }

    return trimed_x;
}

vector<string> rotate(vector<string> X) {
    int H = static_cast<int>(X.size());
    int W = static_cast<int>(X.at(0).size());

    vector<string> x(W);
    for (int i=0; i<W; i++) {
        for(int j=H-1; j>=0; j--) {
            x.at(i).push_back(X.at(j).at(i));
        }
    }

    return x;
}

bool is_same(vector<string> S, vector<string> T) {
    if (S.size() == T.size() && S.at(0).size() == T.at(0).size())
    {
        bool ok = true;
        for (size_t i=0; i<S.size(); i++) {
            for (size_t j=0; j<S.at(0).size(); j++) {
                if (S.at(i).at(j) != T.at(i).at(j)) ok = false;
            }
        }
        return ok;
    } else {
        return false;
    }
}

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << "Yes" << endl;
        return 0;
    }

    vector<string> S(N);
    for (auto& s : S) {
        cin >> s;
    }

    vector<string> T(N);
    for (auto& t : T) {
        cin >> t;
    }

    auto s = trim(S);
    auto t = trim(T);

    bool ok = false;
    if ((s.size() == t.size() && s.at(0).size() == t.at(0).size()) || (s.size() == t.at(0).size() && s.at(0).size() == t.size()))
    {
        for(int i=0; i<4; i++) {
            t =rotate(t);
            if (is_same(s, t)) ok = true;
        }
    }

    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}