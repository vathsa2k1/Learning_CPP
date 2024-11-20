#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Beginning of the main() function"<<endl;
    int n;
    string ans;
    cout<<"Enter a number and I will tell if its odd or even :"<<endl;
    cin>>n;
    if(n%2==0)
    {
        ans="even";
    }
    else{
        ans="odd";
    }
    cout<<"The number "<<n<<" is "<<ans<<endl;


    cout<<"End of the main() function"<<endl;
    return 0;
}