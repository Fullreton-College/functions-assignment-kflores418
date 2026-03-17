/*
## Problem 2 ##   
You have invented a vending machine capable of deep frying twinkies. 
Write a program to simulate the vending machine. It costs $3.50 to 
buy a deep-fried twinkie, and the machine only takes coins in 
denominations of a dollar, quarter, dime, or nickel. Write code to 
simulate a person putting money into the vending machine by repeatedly 
prompting the user for the next coin to be inserted. Output the total 
entered so far when each coin is inserted. When $3.50 or more is added, 
the program should output “Enjoy your deep-fried twinkie” along with 
any change that should be returned. Use top-down design to determine 
appropriate functions for the program.
*/

#include <iostream>
using namespace std;

// We will use cents for all monetary values. This will let us
// work with integer, rather than floating-point, variables.
const int TWINKIE_PRICE = 350;

// Prompt the user to insert coins until enough has been paid to buy
// a twinkie. The total amount inserted, in cents, is returned.
int accept_money();

// Returns the amount of change that should be returned to the user.
int compute_change(int total_paid);

int main()
{
      // Declare variables for the amount of money that the user enters,
    // along with the change that is to be returned to them.
    cout << "Welcome to the Deep Fried Twinkie Vending Machine\n"
         << "Deep Fried Twinkies are $3.50\n";
    
    int money_entered, change;

    // Make sure that monetary values we output are formatted with
    // two digits after the decimal point.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // Collect money from the user
    money_entered = accept_money();

    // Figure out how much change to return
    change = compute_change(money_entered);

    // Dispense the twinkie
    cout << "\nEnjoy your deep-fried twinkie. Your change is $"
         << change/100.0 << endl;

    return 0;
}

int accept_money()
{
  int total = 0;
  char coin;
  cout << "One Dollar Coin - O" << endl;
  cout << "Quarter - Q" << endl;
  cout << "Dime - D" << endl;
  cout << "Nickle - N" << endl;

  while (total < TWINKIE_PRICE)
  {
  cout << "Please insert coins: " << endl;
  cin >> coin;
  int coin_amount = 0;

    if (coin == 'O' || coin == 'o')
    {
      coin_amount = 100;
    } 
    else if(coin == 'Q' || coin == 'q')
    {
      coin_amount = 25;
    }
    else if(coin == 'D' || coin == 'd')
    {
      coin_amount = 10;
    }
    else if(coin == 'N' || coin == 'n')
    {
      coin_amount = 5;
    }
    else 
    {
      cout << "Invalid Input.";
    }
  total = total + coin_amount;
  cout << "Total Cents: " << total << endl;
  }
  int money = total;
  //cout << "money " << money << endl;
  return money;
}

int compute_change(int total_paid) 
{
  int change = total_paid - 350;
 // cout << "Change:" << change << endl;
  return change;
}

