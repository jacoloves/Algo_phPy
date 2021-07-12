#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int n;
  cin >> n;

  vector<int> v(n);
  vector<int> v2(n);

  rep(i, n) {
    v2.at(i) = 0;
  }

  rep(i, n) {
    cin >> v.at(i);
  }

  int cnt = 0;
  int flg = 0;

  int num = 0;

  while(1){
    v2.at(num) = 1;

    num = v.at(num) - 1;

    if (v2.at(1) == 1){
      flg = 1;
      break;
    }
    cnt++;

    if (cnt > n) {
      break;
    }
  }

  if (flg)
    cout << cnt <<endl;
  else
    cout << -1 << endl;
}

