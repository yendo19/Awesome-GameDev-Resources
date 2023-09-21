// add your imports here
#include <iostream>
#include <stdint.h>
using namespace std;
int main(){
  // code here
  int seed, number;
  int r1, r2;
  cin >> seed >>  number >>  r1 >> r2;

  for(int i = 0; i<number; i++)
  {
    seed ^= seed << 13;
    seed ^= seed >> 17;
    seed ^= seed << 5;
    seed  = r1 + (abs(seed) % (r2 - r1 + 1));
    cout << seed << "\n";
  }
}