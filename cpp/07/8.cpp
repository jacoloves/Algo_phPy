#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int N;
  cin >> N;

  vector<int> v(N);

  rep(i, N) {
    cin >> v.at(i);
  }

  int ava = 0;

  rep(i, N) {
    ava += v.at(i);
  }

  int ava_ans = ava/N;

  rep(i, N) {
    cout << abs(v.at(i) - ava_ans) << endl;
  }
}

