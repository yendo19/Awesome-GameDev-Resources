#include <iostream>
#include <list>
using namespace std;
int getNeighbors(int x, int y, int c, int l, char**arr );
int main() {
  // stuff
  int counter;
  int C, L, T;
  // inputs
  cin >> L >> C >> T;

  // grids
  char grid[C][L];
  char temp[C][L];

  // get input
  for (int i = 0; i < C; i++) {
    for (int k = 0; k < L; k++) {
      cin >> grid[i][k];
      temp[i][k] = '.';
    }
  }
  int count = 0;
  int iterations = 8;
              //left   middle   right
  int xDiff[] = {-1,-1,-1,0,0,1,1,1};
  int yDiff[] = {-1,0,1,-1,1,-1,0,1};
  // rounds       //b,m,t               b, m        b,m,t
  for (int j = 0; j < T; j++) {
    // columns
    for (int x = 0; x < C; x++) {
      // rows
      for (int y = 0; y < L; y++) {

        for(int i = 0; i < iterations; i++)
        {
          int tempX = (x + xDiff[i] + C) % C;
          int tempY = (y + yDiff[i] + L) % L;

          if(grid[tempX][tempY] == '#')
            count++;

        }


        if (grid[x][y] == '#')
          if (count < 2 || count > 3)
            temp[x][y] = '.';
          else
            temp[x][y] = '#';

        else if (grid[x][y] == '.')
          if(count == 3)
            temp[x][y] = '#';
          else
            temp[x][y] = '.';

        count = 0;
      }
    }
    for (int t1 = 0; t1 < C; t1++) {
      for (int t2 = 0; t2 < L; t2++) {
        grid[t1][t2] = temp[t1][t2];
      }
    }
  }



     // write out grid
     for (int i = 0; i < C; i++) {
       for (int k = 0; k < L; k++) {
         cout << grid[i][k];
       }
       cout << endl;
     }
};

