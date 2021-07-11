#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> v(m);
  vector<int> v2(m);

  vector<int> v_ans(n);

  rep(i, n) {
    v_ans.at(i) = 0;
  }

  rep(i, m){
    cin >> v.at(i) >> v2.at(i);
  }

  rep(i, m){
    v_ans.at(v.at(i)-1) += 1;
    v_ans.at(v2.at(i)-1) += 1;
  }

  rep(i, n){
    cout << v_ans.at(i) << endl;
  }
}

