#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Welcome to the Calculator Program "<<endl;
    double a , b;
    char op;
    cout<<"Enter the you want to carry out the operation on : "<<endl;
    cin>>a>>b;
    cout<<"Enter a for addition , s for subtraction , m for multiplication and d for division . Case Sensitive"<<endl;
    cin>>op;
    switch (op)
    {
    case 'a' :
        cout<<"The result is : "<<a+b<<endl;
        break;
    case 's' :
        cout<<"The result is : "<<a-b<<endl;
        break;
    case 'm' :
        cout<<"The result is : "<<a*b<<endl;
        break;
    case 'd' :
        cout<<"The result is : "<<a/b<<endl;
        break;
    default:
        cout<<"Please try again !!"<<endl;
        break;
    }
    cout<<"Calculator Program Ends !!!"<<endl;
    return 0;
}