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
    int N, M;
    vector<int> E[2010];

    cin >> N >> M;
    for (int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        E[a].push_back(b);
    }

    int ans=0;

    for (int i=0; i<N; i++) {
            queue<int> que;
            set<int> vis;

            que.push(i);
            vis.insert(i);

            while(!que.empty()) {
                int cu = que.front(); que.pop();
                for (auto &to:E[cu]) {
                    if (!vis.count(to)) {
                        que.push(to);
                        vis.insert(to);
                    }
                }              
            }
            ans += vis.size();
    }
    cout << ans << endl;
}

