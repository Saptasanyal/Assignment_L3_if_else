//Given three points (x1, y1), (x2, y2) and 
//(x3, y3), write a program to check if all the three points fall on one straight
// line.
#include<iostream>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3;
    cout<<"Enter the values of each of 3 points: ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    //if the points line on the same straight line then the slope formed by 
    //(x1,y1) and (x2,y2) is equal to the slope formed by (x2,y2) and (x3,y3).
    //So (y2-y1)/(x2-x1)=(y3-y2)/(x3-x2)
    //or, (y2-y1)*(x3-x2)=(y3-y2)*(x2-x1)
    if((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1)) cout<<"Lie on same straight line\n";
    else cout<<"Dosent lie on same straight line\n";
    return 0;

}
