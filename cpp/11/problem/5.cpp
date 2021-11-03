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
    int a;
    cin >> a;
    vector<int> vec(a);
    vector<int> vec_sort(a);


    rep(i, a) {
       cin >> vec[i];
       vec_sort[i] = vec[i];
    } 

    sort(vec_sort.begin(), vec_sort.end(), greater<int>());

    int booby_num = vec_sort[1];
    int ans;

    rep(i,a) {
        if (vec[i] == booby_num) {
            ans = i+1;
            break;
        } 
    }

    cout << ans << endl;

    return 0;
}
