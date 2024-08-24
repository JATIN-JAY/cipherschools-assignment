// Ques-02 Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.
#include<iostream>
using namespace std;
int main()
{   int g;int s=0;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter grade: ";
        cin>>g;
        s=s+g;
    }
    int avg=s/5;
    cout<<"The average grade is: "<<avg;

}