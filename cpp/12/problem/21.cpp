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

const int MAX_SET = 1000;

int main() {
    int n, x;
    
    vector<int> v_n(MAX_SET);
    vector<int> v_x(MAX_SET);

    int cnt = 0;
    while(true) {
        cin >> n >> x;
        if (n == 0 && x == 0) break;
        v_n[cnt] = n;
        v_x[cnt] = x;
        cnt++;
    }

    int cnt2 = 0;
    for(int h=0; h<cnt; h++) {
        for (int i=1; i <= v_n[h]-2; i++){
            for (int j=i+1; j <= v_n[h]-1; j++){
                for(int k=j+1; k <= v_n[h]; k++){
                    if (v_x[h] == (i+j+k)) cnt2++; 
                }
            }
        }
        cout << cnt2 << endl;
        cnt2 = 0;
    }

    return 0;
}