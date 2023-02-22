#include <iostream>
using namespace std;
 int main(int argc, char const *argv[])
 {
    /*
    LOOPS IN C++
    1. FOR LOOP
    2. WHILE LOOP
    3. DO WHILE LOOP.
    */

   // For loop
   /*
      for (initailization;condition;updation)
      {
         loop body (c++body)
      }   
   */
   // for (int i=0; i<40 ;i++)
   // {
   //    cout << i << endl;
   // }

   // While loops
   //syntax
   /*
    while(condition)
    {
      c ++ statements
    }
   
   */

   // int i = 1;
   // while(i <= 40)
   // {
   //    cout<<i<<endl;
   //    i++;

   // }

   // do while loop
   /*
   do {
      c++ statments;
   } while(condition);

   HERE FIRST CONDITION IS CHECKED AND THEN LOOP RUNS
   SO BASICALLY MIN ONE TIME ATLEAST LOOP RUNS EVEN IF CONDITION IS 
   FALSE.
   */

   int i=0;
   do {
      cout <<6<<'*'<<i<<'='<<i*6<<endl;
      i ++;
   }while(i<=12);
   
    return 0; 
 }
 