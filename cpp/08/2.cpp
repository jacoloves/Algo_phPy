#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  vector<vector<char>> data(10, vector<char>(10));
  vector<vector<int>> exch(10, vector<int>(10));

  rep(i, 10){
    rep(j, 10) {
      cin >> data.at(i).at(j);
    }
  }

  cout << "-------------" << endl;

  rep(i, 10){
    rep(j, 10) {
      if (data.at(i).at(j) == 'o')
        exch.at(i).at(j) = 1;
      else
        exch.at(i).at(j) = 0;
    }
  }
  
  rep(i, 10)
}

