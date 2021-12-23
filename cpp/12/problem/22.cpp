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
    int r, c;
    cin >> r >> c;

    vector<vector<int>> a(r+1, vector<int>(c+1));


    for(int i = 0; i < r; i++){
        int sum=0;
        for(int j=0; j<c; j++){
            cin>>a[i][j];
            sum += a[i][j];
        }
        a[i][c] = sum;
    }

    for(int i = 0; i < c+1; i++){
        int sum=0;
        for(int j=0; j<r+1; j++){
            sum += a[j][i];
        }
        a[r][i] = sum;
    }
    
    for(int i=0; i<r+1; i++){
        for(int j=0; j<c+1; j++){
            if (j != c)
                cout << a[i][j] << " "; 
            else
                cout << a[i][j];
        }
        cout << endl;
    }


    return 0;
}
