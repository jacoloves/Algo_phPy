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
#include <regex> // regex

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; ++i) cin >> A[i];

    vector<int> nums(N, 0);
    for (auto a : A) ++nums[a];

    vector<int> students(N);
    for (int i=0; i<N; ++i) students[i] = i;

    auto cmp = [&](int x, int y) -> bool {
        return nums[x] > nums[y];
    };

    stable_sort(students.begin(), students.end(), cmp);

    for (int i : students) {
        cout << i << " " << nums[i] << endl;
    }
    return 0;
}
