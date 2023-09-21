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

         /*
          *    U
          * L  *  R
          *    D
          */
         for(int c1 = -1; c1 <= 1; c1++) {
           for (int c2 = -1; c2 <= 1; c2++) {
             if (c1 == 0 && c2 == 0) continue;
             int temp1 = (i + c1 + C) % C;
             int temp2 = (k + c2 + L) % L;

             if (grid[temp1][temp2] == '#') counter++;
           }
         }
         //Living/Dying logic
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