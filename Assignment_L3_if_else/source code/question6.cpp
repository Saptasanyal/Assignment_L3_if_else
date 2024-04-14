//If the marks of A, B and C are input through the keyboard,
// write a program to determine the student scoring least marks
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter the score of a,b,c: ";
    cin>>a>>b>>c;
    if(a<b && a<c) cout<<a<<" is the least\n";
    if(b<a && b<c) cout<<b<<" is the least\n";
    if(c<a && c<b) cout<<c<<" is the least\n";
    return 0;
}
