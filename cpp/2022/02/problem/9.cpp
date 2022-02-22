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

bool win(char a, char b) {
    if (a == 'G' && b == 'C') return true;
    if (a == 'C' && b == 'P') return true;
    if (a == 'P' && b == 'G') return true;
    return false;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> v(2*N);

    for (int i=0; i<2*N; ++i) {
        cin >> v[i];
    }

    vector<P> d(N*2);

    for (int i=0; i<2*N; ++i) {
        d[i] = P(0,i);
    }

    for(int mi=0; mi<M; ++mi) {
        for (int ni=0; ni<N; ++ni) {
            int i = ni*2, j = ni*2+1;
            int di = d[i].second, dj = d[j].second;
            if (win(v[di][mi],v[dj][mi])) d[i].first--;
            if (win(v[dj][mi],v[di][mi])) d[j].first--;
        }
        sort(d.begin(), d.end());
    }
    for (int i=0; i<N*2; ++i) {
        cout << d[i].second+1 << endl;
    }
    return 0;
}