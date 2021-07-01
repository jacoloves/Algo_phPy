#include <iostream> // cout, endl, cin
#include <vector> 
#include <cstdlib>
using namespace std;

#define rep(i,n) for (int i = 0; i < (int)(n); ++i)

int main() {
  string str;
  cin >> str;
  
  if (str[str.size()-1] == 'T') {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
