#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int n,m;
  cin >> n;

  vector<string> v(n);

  rep (i, n) {
    cin >> v.at(i);
  }

  cin >> m;

  vector<string> v2(m);

  rep(i, m) {
    cin >> v2.at(i);
  }

  int cnt_a = 0;
  int cnt_b = 0;
  int max = 0;
  string a_str;

  rep(i, n) {
    a_str = v.at(i);
    rep(j, n) {
      if (v.at(j) == a_str)
        cnt_a++;
    }

    rep(j, m) {
      if (v2.at(j) == a_str) 
        cnt_b++;
    }

    if (max < (cnt_a - cnt_b)) {
      max = cnt_a - cnt_b;
    }

    cnt_a = 0;
    cnt_b = 0;
  }

  cout << max << endl;
}

