#include <iostream>
using namespace std;
int main(){
  //stuff
    int C, L, T;
    int counter;

    //inputs
   cin >> L >> C >> T;

   //grids
   char grid[C][L];
   char temp[C][L];

   //get input
   for(int i = 0; i<C; i++)
   {
     for(int k = 0; k<L; k++)
     {
       cin >> grid[i][k];
       temp[i][k] = '.';
     }
   }
   //rounds
   for(int j = 0; j<T; j++) {
     //columns
     for (int i = 0; i < C; i++) {
       //rows
       for (int k = 0; k < L; k++) {
         counter = 0;
         // Right
         /*
         if(i==C)
         {
           if (grid[0][k] == '#') counter++;
         }
         else
             if (grid[i + 1][k] == '#') counter++;

         //left
         if(i == 0)
         {
           if (grid[C][k] == '#') counter++;
         }
         else
             if (grid[i - 1][k] == '#') counter++;

         //up
         if(k==L)
         {
           if (grid[i][0] == '#') counter++;
         }
         else
             if (grid[i][k+1] == '#') counter++;

         //down
         if(k == 0)
         {
           if (grid[i][L] == '#') counter++;
         }
         else
             if (grid[i][k-1] == '#') counter++;

*/
         for(int c1 = -1; c1 <= 1; c1++) {
           for (int c2 = -1; c2 <= 1; c2++) {
             if (c1 == 0 && c2 == 0) continue;
             int temp1 = (i + c1 + C) % C;
             int temp2 = (k + c2 + L) % L;

             if (grid[temp1][temp2] == '#') counter++;
           }
         }
         if (grid[i][k] == '#')
         {
           if(counter < 2 || counter >3)
           {
             temp[i][k] = '.';
           }
           else {
             temp[i][k] = '#';
           }
           }
         else
         {
           if (counter == 3) temp[i][k] = '#';
           else
             temp[i][k] = '.';
         }
       }
     }


     // replace old grid with temp grid
     for (int t1 = 0; t1 < C; t1++)
     {
       for(int t2 = 0; t2<L; t2++)
     {
       grid[t1][t2] = temp[t1][t2];
     }
     }
   }

   //write out grid
   for(int i = 0; i<C; i++)
   {
     for(int k = 0; k<L; k++)
     {
       cout << grid[i][k];
     }
     cout << endl;
   }
};