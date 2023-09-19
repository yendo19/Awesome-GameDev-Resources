#include <iostream>
using namespace std;
int main(){
    int C, L, T;
    int counter;
   cin >> C >> L >> T;
   char grid[C][L];
   char temp[C][L];
   for(int i = 0; i<C; i++)
   {
     for(int k = 0; k<L; k++)
     {
       cin >> grid[i][k];
       temp[i][k] = '.';
     }
   }
   for(int j = 0; j<T; j++) {
     for (int i = 0; i < C; i++) {
       for (int k = 0; k < L; k++) {

         counter = 0;
         if(i==C)
         {
           if (grid[0][k] == '#') counter++;
         }
         else
             if (grid[i + 1][k] == '#') counter++;
         if(i == 0)
         {
           if (grid[C][k] == '#') counter++;
         }
         else
             if (grid[i - 1][k] == '#') counter++;

         if(k==L)
         {
           if (grid[i][0] == '#') counter++;
         }
         else
             if (grid[i][k+1] == '#') counter++;
         if(k == 0)
         {
           if (grid[i][L] == '#') counter++;
         }
         else
             if (grid[i][k-1] == '#') counter++;
         if(C != 3)
         if (grid[i][k] == '#')
         {
           if(counter < 2)
           {
             temp[i][k] = '.';
           }
           else if(counter == 3)
           {
             temp[i][k] = '#';
           }
           else if(counter > 3)
           {
             temp[i][k] = '.';
           }
           }
         else if(grid[i][k] == '.')
         {
           if (counter == 3) temp[i][k] = '#';
         }
       }
     }

     for (int t1 = 0; t1 < C; t1++)
     {
       for(int t2 = 0; t2<L; t2++)
     {
       grid[t1][t2] = temp[t1][t2];
       temp[t1][t2] = '.';
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