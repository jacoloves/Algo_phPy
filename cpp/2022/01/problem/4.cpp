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
    string str;
    cin >> str;
    int q;
    cin >> q;
    vector<string> str_anses(100);
    int cnt = 0;
    for (int i=0; i<q; i++) {
        string order, rep_str;
        int a, b;
        string ans_str = "";
        cin >> order >> a >> b;
        if(order == "replace") cin >> rep_str;

        if (order == "print") {
            for(int j=a; j<=b; j++)  {
                ans_str += str[j];
            }
            str_anses[cnt] = ans_str;
            cnt++;
        }

        if (order == "reverse") {
            string rev_str = "";
            int rev_cnt = 0;
            for(int j=b; j>=a; j--) {
                ans_str += str[j];
            }

            for (int j=0; j<str.length(); j++) {
               if (j >= a && j <= b)  {
                   rev_str += ans_str[rev_cnt];
                   rev_cnt++;
               } else {
                    rev_str += str[j];
               }
            }
            str = rev_str;
        }

        if (order == "replace") {
            str.replace(a, b, rep_str);
        }

        cout << str << endl;
    }

    for (int i=0; i<cnt; i++) {
        cout << str_anses[i] << endl;
    }
    return 0;
}
