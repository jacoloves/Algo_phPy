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
#include <cmath> // sqrt, pow, sin, fabs, cos

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> av(n);
    vector<int> xv(q);
    vector<int> kv(q);

    for (int i=0; i<n; i++) {
        cin >> av[i];
    }

    for (int i=0; i<q; i++) {
        cin >> xv[i] >> kv[i];
    }

    vector<int> ans(q);

    map<int, int> mp;
    
    for (int i=0; i<n; i++) {
        if (mp.find(av[i]) != mp.end()) {
           mp[av[i]] = i+1;
        } else {
            mp[av[i]] = i+1;
        }
    }

    for (auto i = mp.begin(); i != mp.end(); ++i) {
        cout << i->first << " : " << i->second << endl;
    }

    /*
    // unique check
    vector<int> av_unique = av;
    sort(av_unique.begin(), av_unique.end());
    av_unique.erase(unique(av_unique.begin(), av_unique.end()), av_unique.end());
    
    for (int i=0; i<q; i++) {
        bool exist_flg = false;
        // exist check
        for (int j=0; j<sizeof(av_unique)/sizeof(av_unique[0]); j++) {
           if (xv[i] == av_unique[j]) {
                exist_flg = true;
                break;
           }
        }

        int cnt = 0;
        if (exist_flg) {
            for (int j=0; j<n; j++) {
                if (xv[i] == av[j]) {
                    kv[i]--;
                    if (kv[i] == 0) {
                        cnt = j+1;
                        break;
                    }
                }
            }
        } else {
            ans[i] = -1;
        }

        if (cnt == 0) {
            ans[i] = -1;
        } else {
            ans[i] = cnt;
        }
    }


    for (int i=0; i<q; i++) {
        cout << ans[i] << endl;
    }
    */
    return 0;
}
