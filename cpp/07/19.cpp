#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for(int i = 0; i < M; i++){
    cin >> A.at(i) >> B.at(i);
  }

  char data[N][N];

  rep(i, N) {
    rep(j, N){
      data[i][j] = '-';
    }
  }

  rep(i, M){
    data[A.at(i)-1][B.at(i)-1] = 'o';
    data[B.at(i)-1][A.at(i)-1] = 'x';
  }

  rep(i, N) {
    rep(j, N){
      cout << data[i][j];
      cout << " ";
    }
    cout << endl;
  }
}

