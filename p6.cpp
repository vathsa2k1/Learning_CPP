#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Beginning of the main() function : "<<endl;
    cout<<"Welcome to Amount Calculator"<<endl;
    cout<<"Here we help you calculate how much your initial investment"
    <<" will grow into after a few years aat a constant compounding rate ."<<endl;
    int p,t;
    double r,a;
    cout<<"Enter your initial investment : "<<endl;
    cin>>p;
    cout<<"How long will the investment be made for ? "<<endl;
    cin>>t;
    cout<<"Enter the rate of compounding for e.g 12 for 12% "<<endl;
    cin>>r;
    r=r/100;
    a=p*pow(1+r,t);
    cout<<"The initial grew to become : "<<a<<endl;
    cout<<"You earned an interest of : "<<a-p<<endl;


    cout<<"End of the main() function : "<<endl;
    return 0;
}