#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void check_palindrome(int num)
{
    int num_copy=num;
    int rev=0,d=0;
    while(num>0)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if(rev==num_copy)
    {
        cout<<"The number "<<num_copy<<" is a palindrome "<<endl;
    }
    else{
        cout<<"The number "<<num_copy<<" is NOT palindrome "<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    check_palindrome(n);
    return 0;
}