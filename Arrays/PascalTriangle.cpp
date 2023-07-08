//Find element at a particular position ie (for 3row and 4col pass n-1,c-1) in pascals triangle
#include <iostream>
using namespace std;

int main() {
  int n, r;
  cin >> n >> r;
  
//logic nCr
  long long res = 1;
  for (int i = 0; i < r; i++) {
    res = res * (n - i);
    res=res/(i+1);
  }
  cout<<res;
}


//Print nth row in pascals triangle brute force
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n ;

  //print nth row
  for (int c = 1; c < n; c++) {
    //logic nCr
    long long res = 1;
    for (int i = 0; i < c - 1; i++) {
      res = res * (n - 1 - i);
      res = res / (i + 1);
    }
    cout << res;
  }
}
