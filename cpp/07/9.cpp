#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int h, w;
  cin >> h >> w;

  vector<string> v(h);

  rep(i, h){
    cin >> v.at(i);
  }
  
  vector<string> v2(h+2);

  string sharp_str;

  rep(i, w+2) {
    sharp_str += '#';
  }

  rep(i, h+2) {
    if (i >= 1 && i <= h) {
      v2.at(i) = '#' + v.at(i-1) + '#';
    } else {
      v2.at(i) = sharp_str;
    }
  }

  rep(i, h+2) {
    cout << v2.at(i) << endl;
  }

  


}

