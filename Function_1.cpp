/*
## Problem 1 ##.  
Define a function named CoinFlip that returns "Heads" or "Tails" according to a random value 1 or 0. 
Assume the value 1 represents "Heads" and 0 represents "Tails". Then, write a main program that reads 
the desired number of coin flips as an input, calls function CoinFlip() repeatedly according to the 
number of coin flips, and outputs the results. Assume the input is a value greater than 0.

Hint: Use the modulo operator (%) to limit the random integers to 0 and 1.

Ex: If the random seed value is 2 and the input is:

3

The output is:

Tails
Heads
Tails

The program must define and call the following function:
string CoinFlip()
*/

#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */ 
void coinFlip(int& flip);
// Enter a number for a number of coin flips
// Output is heads or tails

int main() 
{
   // Add more variables as needed
   
   int numFlips;
   srand(2);  // Unique seed
   coinFlip(numFlips);

   /* Type your code here */

   return 0;
}

void coinFlip(int& flip)
{
   int i = 1;
   cout << "How many coin flips do you want? ";
   cin >> flip;

   while (i <= flip)
   {
      int coin = rand() % 2;
      //cout << "coin:" << coin << endl;

      if (coin == 1)
         {
            cout << "Heads" << endl;
         }
      else if (coin == 0) 
         {
            cout << "Tails" << endl;
         }
      i++;
   }      
}
      
