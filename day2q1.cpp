// Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.
#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Enter the third number: ";
    cin>>z;
    if(x>y && x>z)
    {
        cout<<"The largest nmber is: "<<x;
    }
    else if(y>x && y>z)
    {
        cout<<"The largest nmber is: "<<y;
    }
    else
    {
        cout<<"The largest nmber is: "<<z;
    }
    
}