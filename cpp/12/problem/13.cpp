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
    int a, b;

    vector<int> va(300);
    vector<int> vb(300);

    int i = 0;
    while(true){
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        va[i] = a;
        vb[i] = b;
        i++;
    }

    for (int cnt = 0; cnt < i; ++cnt) {
        for (int j=0; j < va[cnt]; ++j) {
            for (int k = 0; k < vb[cnt]; ++k)
            {
                if (j==0 || j==va[cnt]-1) {
                    cout << "#";
                }else if(k==0 || k==vb[cnt]-1) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}