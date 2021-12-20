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
    int n;
    cin >> n;

    vector<int> v1(n);
    vector<int> v2(n);
    vector<int> v3(n);
    vector<int> v4(n);

    rep(i, n){
        cin >> v1.at(i) >> v2.at(i) >> v3.at(i) >> v4.at(i);
    }

    int ans_vic[4][3][10];

    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<10; k++){
                ans_vic[i][j][k] = 0;
            }
        }
    }

    rep(i, n){
        ans_vic[v1.at(i)-1][v2.at(i)-1][v3.at(i)-1] += v4.at(i);
        if (ans_vic[v1.at(i)-1][v2.at(i)-1][v3.at(i)-1] < 0)
            ans_vic[v1.at(i)-1][v2.at(i)-1][v3.at(i)-1] = 0;
    }

    for(int i=0; i<4; i++){
        if (i != 0) cout << "####################" << endl;
        for(int j=0; j<3; j++){
            for(int k=0; k<10; k++){
                cout << " " << ans_vic[i][j][k];
            }
            cout << endl;
        }
    }

    return 0;
}