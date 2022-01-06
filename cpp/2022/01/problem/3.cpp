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
  vector<string> a(num);
  vector<string> b(num);

  int ap = 0;
  int bp = 0;

  for (int i=0; i<num; i++) {
    cin >> a[i] >> b[i];
  }

  for (int i=0; i< num; i++) {
    if(a[i] == b[i])  {
      ap += 1;
      bp += 1;
    } else if (a[i] > b[i]) {
      ap += 3;
    } else if (a[i] < b[i]) {
      bp += 3;
    }
  }

  cout << ap << " " << bp << endl;

    return 0;
}
