// add your imports here
#include <iostream>
#include <list>
#include <vector>
using namespace std;
int randVec[] = {72, 99, 56, 34, 43, 62, 31, 4, 70, 22, 6, 65, 96, 71, 29, 9, 98, 41, 90, 7, 30, 3, 97, 49, 63, 88, 47, 82, 91, 54, 74, 2, 86, 14, 58, 35, 89, 11, 10, 60, 28, 21, 52, 50, 55, 69, 76, 94, 23, 66, 15, 57, 44, 18, 67, 5, 24, 33, 77, 53, 51, 59, 20, 42, 80, 61, 1, 0, 38, 64, 45, 92, 46, 79, 93, 95, 37, 40, 83, 13, 12, 78, 75, 73, 84, 81, 8, 32, 27, 19, 87, 85, 16, 25, 17, 68, 26, 39, 48, 36};

int main(){
  int column, lines, randomNum;
  cin >> column >> lines >> randomNum;
  int old = randomNum;
  randomNum++;
  randomNum %= 100;
  randomNum =  randVec[old];
  bool *maze = new bool[column+1* lines+1 * 2];
  int mazeSize = column+1* lines+1 * 2;
  for(int i = 0; i<column +1; i++)
  {
    for(int j = 0; j<lines+1; j++)
    {

    }
  }

cout << column+1* lines+1 * 2;
}
