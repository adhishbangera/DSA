//Brute force

#include <iostream>
using namespace std;

int main() {
  cout << "Enter n and m \n";

  int n, m;
  cin >> n >> m;
  cout << "Enter matrix\n";

  int arr[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {

      if (arr[i][j] == 0) {
        for (int k = 0; k < m; k++) {
          if (arr[i][k] != 0) {
            arr[i][k] = -1;
          }
        }
        for (int l = 0; l < n; l++) {
          if (arr[l][j] != 0) {
            arr[l][j] = -1;
          }
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == -1) {
        arr[i][j] = 0;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << arr[i][j];
    }
  }
}
