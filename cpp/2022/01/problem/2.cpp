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
    string word = "";
    string trans_word = "";
    string commit_word = "";
    int cnt = 0;
    int shuffle_num = 0;
    int shuffle_num_row[100];
    string ans_word[100000];
    int row_cnt = 0;

    while (true) {
        cin >> word;
        if (word == "-") break;
        cin >> cnt;
        trans_word = word;
        for (int i = 0; i < cnt; ++i){
            cin >> shuffle_num;
            shuffle_num_row[i] = shuffle_num;
        }
        for (int j = 0; j < cnt; j++) {
          for (int k = shuffle_num_row[j]; k<trans_word.length(); k++){
            commit_word += trans_word[k];
          }
          for(int l=0; l<shuffle_num_row[j]; l++) {
            commit_word += trans_word[l];
          }
          trans_word = commit_word;
          commit_word = "";
        }
        ans_word[row_cnt] = trans_word;
        row_cnt++;
    }

    for (int i=0; i<row_cnt; i++) {
      cout << ans_word[i] << endl;
    }
    return 0;
}
