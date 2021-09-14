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
    string S;
    cin >> S;

    string rev_S;
    string rev_ans_S;

    for (int i = S.size()-1; i > -1; i--) {
        rev_S.push_back(S.at(i));
    }

    for (int i=0; i < S.length(); i++) {
        if (rev_S.at(i) == '0') {
            rev_ans_S.push_back('0');
        } else if (rev_S.at(i) == '1') {
            rev_ans_S.push_back('1');
        } else if (rev_S.at(i) == '6') {
            rev_ans_S.push_back('9');
        } else if (rev_S.at(i) == '8') {
            rev_ans_S.push_back('8');
        } else if (rev_S.at(i) == '9') {
            rev_ans_S.push_back('6');
        } 
    }

    cout << rev_ans_S << endl;
}

