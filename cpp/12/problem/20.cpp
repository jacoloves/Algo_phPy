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
    int m, f, r;
    int a[50], b[50], c[50];

    int cnt = 0;
    while(true) {
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1) break;
        a[cnt] = m;
        b[cnt] = f;
        c[cnt] = r;
        cnt++;
    }

    for (int i = 0; i < cnt; ++i){
        if(a[i] == -1 || b[i] == -1) 
            cout << "F" << endl;
        else if(80 <= a[i]+b[i])
            cout << "A" << endl;
        else if(65 <= a[i]+b[i] && a[i]+b[i] < 80)
            cout << "B" << endl;
        else if(50 <= a[i]+b[i] && a[i]+b[i] < 65)
            cout << "C" << endl;
        else if(30 <= a[i]+b[i] && a[i]+b[i] < 50)
            if (50 <= c[i])
                cout << "C" << endl;
            else
                cout << "D" << endl;
        else if(30 > a[i]+b[i])
            cout << "F" << endl;
    }

    return 0;
}