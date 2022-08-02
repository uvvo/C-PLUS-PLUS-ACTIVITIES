//Write a C++ program to declare Struct. Initialize and display contents of member variables.
#include <iostream>

using namespace std;

struct college_info{     //Declatre Variable 
    char college_name[50];
    char college_stno[50];
    char dept[50];
    int intake;
};

int main()
{
    struct college_info college;
    
    cout<<"\nEnter the College Information \n\n"; //Display information 
    cout<<"Name of the college: "; 
    cin>>college.college_name;   //Enter a name
    cout<<"College Student Number: ";
    cin>>college.college_stno;  //Enter a student number 
    cout<<"Department: ";
    cin>>college.dept;  // eneter a college department 
    cout<<"Department In-take: ";
    cin>>college.intake;

    cout<<"\nCollege Information\n"; // Display the information 
    cout<<"Name of the college : "<<college.college_name;
    cout<<"\nCollege University Code: "<<college.college_stno;
    cout<<"\nName of the Department: "<<college.dept;
    cout<<"\nThe department of "<<college.dept<<" has in-take : "<<college.intake;
    cout<<"\n\n-----------------------------------------\n\n";
    
    return 0;
}
