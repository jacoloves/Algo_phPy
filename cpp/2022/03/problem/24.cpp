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
#include <cmath>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    string moji;
    cin >> moji;

    string line1 = "oxx";
    string line2 = "xox";
    string line3 = "xxo";
    int cnt = 0;
    int moji_cnt = 0;


    string judge_moji = "";

    for (int i=0; i<3; i++) {
        judge_moji += moji[i];
    }

    string std_line = "";
    if (line1 == judge_moji) std_line = line1;
    else if (line2 == judge_moji) std_line = line2;
    else if (line3 == judge_moji) std_line = line3;
    else return;
    
    for (int i=0; i<moji.length(); i++) {
        
    }

    return 0;
}