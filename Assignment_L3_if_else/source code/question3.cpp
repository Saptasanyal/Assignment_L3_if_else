//Any year is input through the keyboard. 
//Write a program to determine whether the year is a leap year or not. 
//(Considering leap year occurs after every 4 years)
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    //any year that is not ending with 00 and is divisible by 4 is a leap year. 
    //in case that it is ending with 00 then it must be divisible by 400 for it 
    //to be leap year.
    if((year%4==0 && year%100!=0)||(year%400==0)) cout<<"Leap Year!";
    else cout<<"Not a leap year";
    return 0;
}