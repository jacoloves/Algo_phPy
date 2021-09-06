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

int main() {
  bitset<8> a("00011011");
  bitset<8> b("00110101");

  auto c = a & b;
  cout << "1: " << c << endl;
  cout << "2: " << (c << 1) << endl;
  cout << "3: " << (c << 2) << endl;
  cout << "4: " << (c << 3) << endl;
  cout << "5: " << (c << 4) << endl;

  c <<= 4;
  c ^= bitset<8>("11010000");
  cout << "6: " << c << endl;

}

