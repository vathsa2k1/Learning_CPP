#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int swap_1(int a, int b)
{
    int t=a;
    a=b;
    b=t;
    cout<<"The numbers after swapping are : "<<a<<" and "<<b<<endl;
}
int swap_2(int &a, int &b)
{
    int u=a;
    a=b;
    b=u;
    cout<<"The numbers after swapping are : "<<a<<" and "<<b<<endl;
}
int swap_3(int *a, int *b)
{   
    cout<<"Using Pointers here "<<endl;
    //cout<<"The two numbers you entered were : "<<*a<<" and "<<*b<<endl;
    int t=*a;
    *a=*b;
    *b=t;
    cout<<"The numbers after swapping are : "<<*a<<" and "<<*b<<endl;
}
int main()
{
    cout<<"Hello USer !"<<endl;
    int num_1,num_2;
    cout<<"Enter two numbers separated by a space : "<<endl;
    cin>>num_1>>num_2;
    cout<<"The two numbers you entered were : "<<num_1<<" and "<<num_2<<endl;
    cout<<"I Will be swapping them now : "<<endl;
    swap_1(num_1,num_2);
    //swap_2(num_1,num_2);
    swap_3(&num_1,&num_2);
    cout<<"Bye Bye "<<endl;
    return 0;

}