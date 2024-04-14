//Given a point (x, y),
// write a program to find out if it lies on the x-axis, y-axis or 
//at the origin, viz. (0, 0)
#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter the value of X-axis and the value of Y-axis: ";
    cin>>x>>y;
    if(x==0 && y!=0) cout<<"Point lies on Y-axis\n";
    if(x!=0 && y==0) cout<<"Point lies on X-axis\n";
    if(x==0 && y==0) cout<<"Point lies on the origin\n";
    if(x!=0 && y!=0) cout<<"Point dosen't lie on any axis or the origin\n";
    return 0;
}