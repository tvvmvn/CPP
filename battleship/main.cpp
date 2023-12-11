#include <iostream>
#include <string>
// date and time
#include <chrono>
#include <ctime>
// standard: namespace library
using namespace std; 
// math library is built-in

int main() {

  int ship_cnt = 0;
  int times = 0;
  int row, col;
  string crds;
  string row_name = "ABCDE";
  string col_name = "0 1 2 3 4";
  int rows = 5;
  int cols = 5;
  int ships[rows][cols];
  srand(time(NULL));

  for (int r=0; r<4; r++) {
    for (int c=0; c<4; c++) {
      int n = (rand() % 2);

      if (n > 0) {
        ship_cnt++;
      }

      ships[r][c] = n;
    }
  }


  // PLAYING GAME
  cout << "* THE BATTLESHIPS *\n";

  while (ship_cnt > 0) {
    // draw stage
    cout << "\n";

    cout << "  " << col_name << "\n";

    for (int r=0; r<rows; r++) {
      cout << row_name[r];

      for (int c=0; c<cols; c++) {
        int ship = ships[r][c];

        if (ship == 1) {
          cout << " X";
        } else {
          cout << " -";
        }
      }

      cout << "\n";
    }

    cout << "\n";

    // choose crds
    cout << "Choose a coordinates. e.g) A1\n";

    cin >> crds;

    row = crds[0] - 65;
    col = crds[1] - '0';

    // hits or miss
    if (ships[row][col]) {
      ships[row][col] = 0;

      cout << "Hit!\n";
      
      ship_cnt--;

    } else {
      cout << "Miss\n";
    }

    // increase turns
    times++;
  }


  // GAME END
  cout << "Victory! You won in " << times << " times.\n";
}