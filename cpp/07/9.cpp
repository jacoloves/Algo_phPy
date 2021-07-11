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

  rep(i, h+2) {
    rep(j, w+2) {
      if (i >= 1 || i <= h) {
        if (j != 0 || j != w) {
          v2.at(i).at(j) = v.at(i-1).at(j-1);
        }
      }
      v2.at(i).at(j) = '#';
    }
  }

}

