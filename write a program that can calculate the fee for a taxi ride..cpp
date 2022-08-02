// Write a program that can calculate the fee for a taxi ride.
#include <iostream>
using namespace std;
int main()
{
    double totalfee, km, m; //declare variable 
    cout << "distance" << endl; 
    cin >> km;
    m = km * 3000;
    if (km < 30)
    {
        totalfee = 5000;
        cout << "totalfee = " << totalfee << endl; //display total fee
    }
    else if (km > 200)
    {
        totalfee = 1000;
        cout << "totalfee = " << totalfee << endl;
    }
    system("pause");
}
