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
    string v[1000];
    int v2[1000];

    int cnt = 0;
    string a;
    for(int i=0; i<1000; i++){
        cin >> a; 
        if (a == "0") break;
        v[i] = a;
        cnt++;
    }

    int ans;
    string ans_str = "";
    for(int i=0; i<cnt; i++){
        ans = 0;
        ans_str = v[i];
        for(int j=0; j<v[i].length(); j++) {
            ans += ans_str[j] - '0'; 
        }
        v2[i] = ans;
    }

    for(int i=0; i<cnt; i++){
        cout << v2[i] << endl;
    }

    return 0;
}