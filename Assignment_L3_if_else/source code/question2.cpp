//Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include<iostream>
using namespace std;
int main()
{
    float rad;
    cout<<"Enter the radius of the circle: ";
    cin>>rad;
    cout<<"Area= "<<3.14*rad*rad<<" Perimeter= "<<2*3.14*rad<<endl;
    if(3.14*rad*rad>2*3.14*rad) cout<<"Area of circle is greater\n";
    else cout<<"Perimeter of the circle is greater\n";
    return 0;

}