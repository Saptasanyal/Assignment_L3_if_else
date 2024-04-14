//Given the length and breadth of a rectangle, 
//write a program to find whether numerically the area of the rectangle is greater than 
//its perimeter.
#include<iostream>
using namespace std;
int main()
{
    float len,bth;
    cout<<"Enter the length of rectangle: ";
    cin>>len;
    cout<<"Enter the breadth of rectangle: ";
    cin>>bth;
    cout<<"Area= "<<len*bth<<" Perimeter= "<<2*(len+bth)<<endl;
    if(len*bth>2*(len+bth)) cout<<"Area of rectangle is greater\n";
    else cout<<"Perimeter of the rectangle is greater\n";
    return 0;

}