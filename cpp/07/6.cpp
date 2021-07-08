#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int H, W;
  cin >> H >> W;

  char str_len[H][W], ans_len[H][W];

  rep(i, H) {
    cin >> str_len[i];
  }

  int cnt = 0;

  rep(i, H){
    rep(j, W){
      cnt = 0;
      if (str_len[i][j] != '#') {
        if (i==0) {
          if (j==0) {
            if (str_len[i][j+1] == '#')
              cnt++;
            if (str_len[i+1][j] == '#')
              cnt++;
            if (str_len[i+1][j+1] == '#')
              cnt++;
          } else if (j==W-1) {
            if (str_len[i][j-1] == '#')
              cnt++;
            if (str_len[i+1][j] == '#')
              cnt++;
            if (str_len[i+1][j-1] == '#')
              cnt++;
          } else {
            if (str_len[i][j-1] == '#')
              cnt++;
            if (str_len[i][j+1] == '#')
              cnt++;
            if (str_len[i+1][j-1] == '#')
              cnt++;
            if (str_len[i+1][j] == '#')
              cnt++;
            if (str_len[i+1][j+1] == '#')
              cnt++;
          }
        } else if (i==H-1) {
          if (j==0) {
            if (str_len[i-1][j] == '#')
              cnt++;
            if (str_len[i-1][j+1] == '#')
              cnt++;
            if (str_len[i][j+1] == '#')
              cnt++;
          } else if (j==W-1) {
            if (str_len[i-1][j-1] == '#')
              cnt++;
            if (str_len[i-1][j] == '#')
              cnt++;
            if (str_len[i][j-1] == '#')
              cnt++;
          } else {
            if (str_len[i-1][j-1] == '#')
              cnt++;
            if (str_len[i-1][j] == '#')
              cnt++;
            if (str_len[i-1][j+1] == '#')
              cnt++;
            if (str_len[i][j-1] == '#')
              cnt++;
            if (str_len[i][j+1] == '#')
              cnt++;
          }
        } else {
          if (j==0) {
            if (str_len[i-1][j] == '#')
              cnt++;
            if (str_len[i-1][j+1] == '#')
              cnt++;
            if (str_len[i][j+1] == '#')
              cnt++;
            if (str_len[i+1][j] == '#')
              cnt++;
            if (str_len[i+1][j+1] == '#')
              cnt++;
          } else if (j==W-1) {
            if (str_len[i-1][j-1] == '#')
              cnt++;
            if (str_len[i-1][j] == '#')
              cnt++;
            if (str_len[i][j-1] == '#')
              cnt++;
            if (str_len[i+1][j-1] == '#')
              cnt++;
            if (str_len[i+1][j-1] == '#')
              cnt++;
          } else {
            if (str_len[i-1][j-1] == '#')
              cnt++;
            if (str_len[i-1][j] == '#')
              cnt++;
            if (str_len[i-1][j+1] == '#')
              cnt++;
            if (str_len[i][j-1] == '#')
              cnt++;
            if (str_len[i][j+1] == '#')
              cnt++;
            if (str_len[i+1][j-1] == '#')
              cnt++;
            if (str_len[i+1][j] == '#')
              cnt++;
            if (str_len[i+1][j+1] == '#')
              cnt++;
          }
        }
      ans_len[i][j] = (char)cnt;
      } else {
        ans_len[i][j] = '#';
      }
    } 
  }

  rep(i, H){
    rep(j, W){
      cout << ans_len[i][j];
    }
    cout << endl;
  }
}
