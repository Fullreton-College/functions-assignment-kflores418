/*
## Problem 4 ## 

Write a program that tells what coins to give out for any amount of change from 1 cent to 99 cents. 
For example, if the amount is 86 cents, the output would be something like the following:

86 cents can be given as
3 quarter(s) 1 dime(s) and 1 penny(pennies)
Use coin denominations of 25 cents (quarters), 10 cents (dimes), and 1 cent (pennies). 
Do not use nickel and half-dollar coins. Your program will use the following function (among others):

void computeCoins(int coinValue, int& num, int& amountLeft);
//Precondition: 0 < coinValue < 100; 0 <= amountLeft < 100.
//Postcondition: num has been set equal to the maximum number
//of coins of denomination coinValue cents that can be obtained
//from amountLeft. Additionally, amountLeft has been decreased
//by the value of the coins, that is, decreased by
//num * coinValue.
For example, suppose the value of the variable amountLeft is 86. Then, after the following 
call, the value of number will be 3 and the value of amountLeft will be 11 (because if you take 
3 quarters from 86 cents, that leaves 11 cents):

computeCoins(25, number, amountLeft);
Include a loop that lets the user repeat this computation for new input values until the user 
says he or she wants to end the program. (Hint: Use integer division and the % operator to implement 
this function.)

*/

#include <iostream>
using namespace std;

//define necessary functions
int main()
{

  //your code goes here

return 0;
}

//implement functions
