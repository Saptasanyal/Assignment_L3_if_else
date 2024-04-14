//Write a program to input sides of a triangle and check 
//whether a triangle is equilateral, scalene or isosceles triangle.
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter the length of 3 sides of triangle: ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b)
    {
        if(a==b && b==c) cout<<"Equilateral triangle\n";
        if((a==b && b!=c) || (b==c && a!=b) || (c==a && b!=c)) cout<<"Isosceles triangle\n";
        if(a!=b && a!=c && b!=c) cout<<"Scalene triangle\n";
    }
    else{
        cout<<"Triangle is not possible\n";
    }

    return 0;
}
