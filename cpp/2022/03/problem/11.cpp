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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    vector<int> v2(n);
    vector<int> ans(n);

    for (int i=0; i<n; ++i) {
        cin >> v[i];
    }

    for (int i=0; i<n; ++i) {
        cin >> v2[i];
    }

    int cnt = 0;
    bool flg = false;
    for (int i=0; i<n; ++i) {
        if (i == 0) {
            if (abs(v[i] - v[i+1]) <= k) {
                ans[cnt] = v[i];
                cnt++;
            } else if (abs(v2[i] - v[i+1]) <= k ) {
                ans[cnt] = v2[i];
                cnt++;
            } else {
                break;
            }
        } else {
            if (abs(ans[cnt-1] - v[i]) <= k) {
                ans[cnt] = v[i];
                cnt++;
            } else {
                break;
            }
        }
        cout << cnt << endl;
    }

    if (cnt == n) flg = true;

    if (!flg) {
        cnt = 0;
        for (int i=0; i<n; ++i) {
            if (i == 0) {
                if (abs(v[i] - v2[i+1]) <= k) {
                    ans[cnt] = v[i];
                    cnt++;
                } else if (abs(v2[i] - v2[i+1]) <= k) {
                    ans[cnt] = v2[i];
                    cnt++;
                } else {
                    break;
                }
            } else {
                if (abs(ans[cnt-1] - v[i]) <= k) {
                    ans[cnt] = v2[i];
                    cnt++;
                } else {
                    break;
                }
            }
            cout << cnt << endl;
        }
    }

    if (cnt == n) flg = true;


    if (flg) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}