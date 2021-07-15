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

  rep(i, n){
    cin >> v.at(i);
  }

  int ali = 0;
  int bob = 0;

  int max = 0;
  int cnt = 1;

  int max_v = 0;

  while(1) {
    rep(i, n){
      if (max < v.at(i)){
        max = v.at(i);
        max_v = i;
      }
    }

    v.at(max_v) = -1;

    if (cnt % 2 != 0)
      ali += max;
    else
      bob += max;

    if(n == cnt)
      break;
    
    cnt++;
    max = 0;
  }

  cout << ali - bob << endl;

}

