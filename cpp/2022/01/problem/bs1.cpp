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
#include <cmath> // sqrt, pow, sin, fabs, cos

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

vector<int> a = {1, 14, 32, 51, 51, 51, 243, 419, 750, 910};

int binary_search(int key) {
    int left = 0, right = (int)a.size() - 1;
    while(right >= left) {
        int mid = left + (right - left) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] > key) right = mid - 1;
        else if (a[mid] < key) right = mid + 1;
    }
    return -1;
}

int main() {
    cout << binary_search(51)  << endl;
    cout << binary_search(1)  << endl;
    cout << binary_search(910)  << endl;

    cout << binary_search(52)  << endl;
    cout << binary_search(0)  << endl;
    cout << binary_search(911)  << endl;

    return 0;
}
