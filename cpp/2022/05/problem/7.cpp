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

struct Student {
    string name;
    ll math;
    ll eng;
};

int main() {
    int N;
    cin >> N;
    vector<Student> S(N);
    for (int i=0; i<N; ++i) {
        cin >> S[i].name >> S[i].math >> S[i].eng;
    }

    auto cmp = [&](Student x, Student y) -> bool {
        if (x.math > y.math)
            return true;
        else if (x.math == y.math && x.math + x.eng < y.math + y.eng)
            return true;
        else
            return false;
    };
    stable_sort(S.begin(), S.end(), cmp);

    for (Student s : S) {
        cout << s.name << " " << s.math << " " << s.eng << endl;
    }
    return 0;
}
