/*
## Problem 3 ##
Write a program that requests the current time and a waiting time as two integers for 
the number of hours and the number of minutes to wait. The program then outputs what 
the time will be after the waiting period. Use 24-hour notation for the times. Include 
a loop that lets the user repeat this calculation for additional input values until 
the user says she or he wants to end the program.


 Example of the output:

Compute completion time from current time and waiting period
Current time:
Enter 24 hour time in the format HH:MM
12:30
Waiting time:
Enter 24 hour time in the format HH:MM
15:40
Enter Y or y to continue, any other halts

y

Current time:

Enter 24 hour time in the format HH:MM
8:30

Waiting time:

Enter 24 hour time in the format HH:MM
15:10

Completion Time in 24 hour format:

23:40


Enter Y or y to continue, any other halts

n

Press any key to continue
*/

#include <iostream>
using namespace std;

void input( int& hours24, int& minutes);
void output( int hours, int minutes);

int main()
{
    int timeHours, timeMinutes, waitHours, waitMinutes,finishHours, finishMinutes;

  cout << "Compute completion time from current time and waiting period\n";
  

  char ans = 'y'; 
  while ('y' == ans || 'Y' == ans)
  {
    cout << "Current time:\n";
    input(timeHours, timeMinutes);

    cout << "Waiting time:\n";
    input(waitHours, waitMinutes);

    
    finishHours = timeHours + waitHours;
    finishMinutes = timeMinutes + waitMinutes;

    
    finishHours += finishMinutes / 60;
    if(finishHours >= 24)
	{
	  finishHours %= 24;
	  cout << "Completion time is in the day following the start time\n";
    }

    finishMinutes%= 60;

    cout << "Completion ";
    output(finishHours, finishMinutes);

	cout << "\n\nEnter Y or y to continue, any other halts\n\n";
	cin >> ans;
  }

  return 0;
}

void input( int& hours24, int& minutes)
{
  char colon;
  cout << "Enter 24 hour time in the format HH:MM\n";
  cin >> hours24 >> colon >> minutes;

}


void output( int hours, int minutes)
{
  cout << "Time in 24 hr format:\n";
  cout << endl;
  cout << hours << ":" << minutes << endl;

}
