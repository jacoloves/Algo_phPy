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
    int num;
    cin >> num;

    vector<char> v1(num);
    vector<int> v2(num);

    rep(i, num){
        cin >> v1[i] >> v2[i];
    }

    int cards[4][13];

    int num_change;
    rep(i, num) {
        if(v1[i] == 'S') num_change=0;
        else if(v1[i] == 'H') num_change=1;
        else if(v1[i] == 'C') num_change=2;
        else if(v1[i] == 'D') num_change=3;

        cards[num_change][v2[i]-1] = 1;
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<13; j++){
            if (cards[i][j] != 1) {
                if(i==0) cout << "S" << " "<< j+1 << endl;
                else if(i==1) cout << "H" << " "<< j+1 << endl;
                else if(i==2) cout << "C" << " "<< j+1 << endl;
                else if(i==3) cout << "D" << " "<< j+1 << endl;
            }
        }
    }

    

    return 0;
}