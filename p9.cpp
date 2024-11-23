#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check_leap(int year)
{
    if(year%400==0)
    {
        return true;
    }
    else if(year%100==0)
    {
        return false;
    }
    else if(year%4==0)
    {
        return true;
    }
    else{}
}
int main()
{
    cout<<"Beginning of the main function : "<<endl;
    int input_year;
    cout<<"Enter the year you want to check : "<<endl;
    cin>>input_year;
    bool ans=check_leap(input_year);
    if(ans==true)
    {
        cout<<"The year "<<input_year<<" is a leap year"<<endl;
    }
    else{
        cout<<"The year "<<input_year<<" is not a leap year"<<endl;
    }
    cout<<"End of the main function"<<endl;
    return 0;
}