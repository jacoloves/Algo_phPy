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
    
    for(int bit = 0; bit < 1<<3; ++bit){
        int sm = S[0] - '0';
        for(int i=0; i<3; ++i) {
            if (bit & (1 << i)) sm += S[i+1] - '0';
            else sm -= S[i+1] - '0';
        }
        if (sm == 7) {
            cout << S[0];
            for(int i=0; i<3; ++i) {
                if (bit & (1 << i)) cout << "+";
                else cout << "-";
                cout << S[i+1];
            }
            cout << "=7" << endl;
        }
    }
}

