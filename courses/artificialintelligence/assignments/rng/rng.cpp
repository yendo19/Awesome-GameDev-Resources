// add your imports here
#include <iostream>
#include <stdint.h>
using namespace std;
int main(){
  // code here
  uint32_t seed, number;
  int32_t r1, r2;
  cin >> seed >>  number >>  r1 >> r2;

  for(int i = 0; i<number; i++)
  {
    seed ^= seed << 13;
    seed ^= seed >> 17;
    seed ^= seed << 5;
    cout << r1 + seed % (r2-r1+1) << endl;
  }
}