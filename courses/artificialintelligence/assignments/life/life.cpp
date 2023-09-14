#include <iostream>
using namespace std;
int main(){
    int C, L, T;

   cin >> C >> L >> T;
   char grid[C][L];
   for(int i = 0; i<C; i++)
   {
     for(int k = 0; k<L; k++)
     {
       cin >> grid[i][k];
     }
   }

   for(int j = 0; j<T; j++)
   {
   for(int i = 0; i<C; i++) {
       for (int k = 0; k < L; k++) {
         if (grid[i][k] == '#') {
           int counter = 0;
           if (grid[i + 1][k] != NULL)
             if (grid[i + 1][k] == '#') counter++;
           if (grid[i - 1][k] != NULL)
             if (grid[i - 1][k] == '#') counter++;
           if (grid[i][k + 1] != NULL)
             if (grid[i][k + 1] == '#') counter++;
           if (grid[i][k - 1] != NULL)
             if (grid[i][k - 1] == '#') counter++;

           switch (counter) {
             case 0:
               grid[i][k] = '.';
               break;
             case 1:
               grid[i][k] = '.';
               break;
             case 2:
               grid[i][k] = '.';
             case 4:
               grid[i][k] = '.';
               break;
             default:
               break;
           }
         } else {
           int counter = 0;
           if (grid[i + 1][k] != NULL)
             if (grid[i + 1][k] == '#') counter++;
           if (grid[i - 1][k] != NULL)
             if (grid[i - 1][k] == '#') counter++;
           if (grid[i][k + 1] != NULL)
             if (grid[i][k + 1] == '#') counter++;
           if (grid[i][k - 1] != NULL)
             if (grid[i][k - 1] == '#') counter++;

           if (counter == 3) grid[i][k] = '#';
         }
       }
     }
   }

   for(int i = 0; i<C; i++)
   {
     for(int k = 0; k<L; k++)
     {
       cout << grid[i][k];
     }
     cout << endl;
   }

};