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
    string w;
    cin >> w;
    
    string ans;
    string trans_ans;
    string trans_word;
    int cnt = 0;
    bool index_flg = false;
    while (true) {
       cin >> ans;
       if (ans == "END_OF_TEXT") break;
       trans_ans = ans;
       trans_word = word;
       transform(ans.begin(), ans.end(), trans_ans.begin(), tolower);
       transform(w.begin(), w.end(), trans_word.begin(), tolower);
       if (trans_ans == trans_word) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
