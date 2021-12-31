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
    string s, p;
    cin >> s >> p;
    
    string tmp = "";
    int cnt = 0;
    string refstr = "";
    int ans_cnt = 0;
    bool flg = false;
    for(int i=s.length()-1; i >= 0; --i) {
        tmp = s[i] + tmp;
        //cout << tmp << endl;
        for(int j=0; j<s.length()-1-cnt; ++j) {
            refstr += s[j];
        }
        //cout << refstr << endl;
        refstr = tmp + refstr;
        //cout << refstr << endl;
        for(int j=0; j<p.length(); ++j) {
            //cout << refstr[j] << " " << p[j] << endl;
            if (refstr[j] == p[j]) {
                ans_cnt++;
            } else {
                ans_cnt=0;
                break;
            }
        }
        //cout << "-----------------------" << endl;

        if (ans_cnt == p.length()) {
            flg = true;
            break;
        } 
        cnt++;
        refstr = "";
    }

    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
        
    return 0;
}
