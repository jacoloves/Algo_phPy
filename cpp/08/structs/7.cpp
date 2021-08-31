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

    void operator=(const MyPair &other) {
        cout << "= operator called" << endl;
        x = other.x;
        y = other.y;
    }
};

int main() {

    MyPair a = {123, "hello"};

    MyPair b;
    b = a;

    cout << "b.x = " << b.x << endl;
    cout << "b.y = " << b.y << endl;
}

