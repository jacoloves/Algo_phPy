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
     vector<int> v(10000);
     vector<int> v2(10000);

    int i = 0;
    int num, num2;
    while(true){
        cin >> v.at(i) >> v2.at(i); 
        if (v[i] == 0 && v2[i] == 0) break;
        i++;
    }

    for(int j=0; j<i; j++){
        cout << min(v[j], v2[j]) << " " << max(v[j], v2[j]) << endl;
    }

    return 0;
}