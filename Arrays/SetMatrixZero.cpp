//Brute force ----------------------------------

#include <iostream>
using namespace std;

int main() {
  cout << "Enter n and m \n";

  int n, m;
  cin >> n >> m;
  cout << "Enter matrix\n";

  int arr[n][m];
//input matrix
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  //logic to replace 0 existing row and column with -1
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
// replacing -1 with 0
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == -1) {
        arr[i][j] = 0;
      }
    }
  }

  //print
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << arr[i][j];
    }
  }
}


//better solution ---------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
  int n = 3, m = 3;
  // cin >> n >> m;
  cout << "Enter matrix\n";

  int arr[n][m];
  // create a row and column to identify if it has zero
  int row[3] = {0};
  int col[3] = {0};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  // if 0 present in row or column mark it
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 0) {
        row[i] = 1;
        col[j] = 1;
      }
    }
  }

  // replace with 0 for marked row and column
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (row[i] == 1 || col[j] == 1) {
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
