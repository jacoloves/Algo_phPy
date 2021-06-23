#include <iostream> // cout, endl, cin
#include <vector> 
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int N;
  int cnt = 0;
  cin >> N;

  vector<vector<int>> data(N, vector<int>(2));
  
  rep(i, N) {
    cin >> data[i][0] >> data[i][1];
  }
  
  rep(i, N) {
    for (int j = data[i][0]; j <= data[i][1]; ++j)
      cnt++;
  }

  cout << cnt << endl;
}
