#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  vector<int> data(5);
  rep(i, 5){
    cin >> data.at(i);
  }
  
  int flg = 0;

  rep(i, 5) {
    if (i != 4) {
      if (data.at(i) == data.at(i+1)) {
        flg = 1;
        break;
      }
    }
  }

  if (flg == 1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}


