#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
double a,b,c;
int ch;
cout<<"Enter two digits \n";
cin>>a>>b;
cout<<"Choose any one operation among the following \n";
cout<<"1 for addition \n";
cout<<"2 for subtraction \n";
cout<<"3 for multiplication \n";
cout<<"4 for divison \n";
cout<<"Enter your choice \n";
cin>>ch;
switch (ch)
{
case 1:
    c=a+b;
    cout<<"The addition of two numbers is: "<<c;
    break;
    case 2:
    c=a-b;
    cout<<"The Subtraction of two numbers is: "<<c;
    break;
    case 3:
    c=a*b;
    cout<<"The multiplication of two numbers is: "<<c;
    break;
    case 4:
    c=a/b;
    cout<<"The division of two numbers is: "<<c;
    break;

default:
    break;
}
return 0;
}


