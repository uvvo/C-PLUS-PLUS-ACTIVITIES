// Write a C++ program to display the current date and time. Sample Output.
//Display the Current Date and Time :
#include<iostream>
#include<cmath>
#include <ctime>
using namespace std;

int main()
{

 time_t t = time(NULL);//Variable
 tm* tPtr = localtime(&t);
 cout << "\n\n Display the Current Date and Time :\n"; //Display Input and Output
 cout << "----------------------------------------\n";
 cout << " seconds = " << (tPtr->tm_sec) << endl;
 cout << " minutes = " << (tPtr->tm_min) << endl;
 cout << " hours = " << (tPtr->tm_hour) << endl;
 cout << " day of month = " << (tPtr->tm_mday) << endl;
 cout << " month of year = " << (tPtr->tm_mon)+1 << endl;
 cout << " year = " << (tPtr->tm_year)+2001 << endl;
 cout << " weekday = " << (tPtr->tm_wday )<< endl;
 cout << " day of year = " << (tPtr->tm_yday )<< endl;
 cout << " daylight savings = " <<(tPtr->tm_isdst )<< endl;
        cout << endl;
        cout << endl;

        // Dispaly current date and Current time
        cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+2001<< endl;
        cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; 
           cout << endl;
    return 0;
}
