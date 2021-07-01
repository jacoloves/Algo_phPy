#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  string str;
  int N;
  cin >> str;
  cin >> N;

  cout << str[N-1] << endl;
}
