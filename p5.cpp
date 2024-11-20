#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Beginning of the main() "<<endl;
    int a=23;
    double b=23.4;
    float f=34.8;
    char c;
    long int li =2334;
    long long int lli=23345;
    string str="Srivathsa Anandgal from Hyderabad, India";
    cout<<"The size of integer is : "<<sizeof(a)<<endl;
    cout<<"The size of float is : "<<sizeof(f)<<endl;
    cout<<"The size of double is : "<<sizeof(b)<<endl;
    cout<<"The size of char is : "<<sizeof(c)<<endl;
    cout<<"The size of long int  is : "<<sizeof(li)<<endl;
    cout<<"The size of long long int  is : "<<sizeof(lli)<<endl;
    cout<<"The size of string  is : "<<(str).length()<<endl;
    cout<<"End of the main() "<<endl;
    return 0;
}