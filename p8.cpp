#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    cout<<"Hello! We begin here in main() "<<endl;
    int a,b,c;
    cout<<"Enter 3 numbers and I will tell which one is the largest : "<<endl;
    cin>>a>>b>>c;
    //int max= a>( (b>c)?b:c )?a :(b>c)?b:c;
    int max= (a>b)? (a>c?a:c):(b>c?b:c);
    cout<<"The maximum is : "<<max<<endl;
    cout<<"Finished!! Done with main()"<<endl;
    return 0;
}