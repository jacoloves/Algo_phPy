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
    string str;
    cin >> str;
    int tran_str = stoi(str);
    int ans1 = tran_str;
    int a = tran_str / 100;
    tran_str = tran_str % 100;
    int b = tran_str / 10;
    int c = tran_str % 10;

    int ans2 = b*100 + c*10 + a; 
    int ans3 = c*100 + a*10 + b; 

    int ans = ans1 + ans2 + ans3;

    cout << ans << endl;
    return 0;
}
