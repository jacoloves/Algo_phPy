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

struct MyPair {
    int x;
    string y;

    MyPair() {
        cout << "初期化なし" << endl;
    }

    MyPair(int x_) {
        cout << "xのみ初期化" << endl;
        x = x_;
    }

    MyPair(int x_, string y_) {
        cout << "x, y両方初期化" << endl;
        x = x_;
        y = y_;
    }
};

int main() {
    MyPair p;
    cout << "p.x = " << p.x << endl;
    cout << "p.y = " << p.y << endl;

    MyPair q(1234);
    cout << "q.x = " << q.x << endl;
    cout << "q.y = " << q.y << endl;

    MyPair r(111111, "good boy");
    cout << "r.x = " << r.x << endl;
    cout << "r.y = " << r.y << endl;
}

