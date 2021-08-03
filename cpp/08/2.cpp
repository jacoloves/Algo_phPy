#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int verif_func(vector<vector<int>> &a) {
  bool s_flg = false;
  int ex_cnt = 0;
  rep(i, 10){
    rep(j, 10){
      if(a.at(i).at(j) == 1)
        s_flg = true;

      if(s_flg){
        if(i == 0){
          if(j == 0){
            if ((a.at(i).at(j+1) == 1 || a.at(i+1).at(j) == 1) && a.at(i).at(j) == 1)
              ex_cnt == 0;
          }else if(j == 9)
        }
      }
    }
  }
}

int main() {
  vector<vector<char>> data(10, vector<char>(10));
  vector<vector<int>> exch(10, vector<int>(10));

  rep(i, 10){
    rep(j, 10) {
      cin >> data.at(i).at(j);
    }
  }

  rep(i, 10){
    rep(j, 10) {
      if (data.at(i).at(j) == 'o')
        exch.at(i).at(j) = 1;
      else
        exch.at(i).at(j) = 0;
    }
  }
  
}

