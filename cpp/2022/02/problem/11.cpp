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

    string chg = "";

    //cout << "test" << endl;

    for (int i=0; i<str.length(); i++) {
        int cnt = 0;
        //cout << "test2" << endl;
        for (int j=i; j<str.length()*2-1; j++) {
            if (cnt == str.length()) break;
            if (j >= str.length()) j = j - str.length();
            chg = chg + str[j];
            //cout << "test3" << endl;
            cnt++;
        }
        cout << chg << endl;
        chg = "";
    }

    return 0;
}