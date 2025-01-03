#include<iostream>
#include<bits/stdc++.h>

using namespace std;
bool check_prime(int num)
{
    if(num<=1)
    {
        return false;
    }
    if(num<=3)
    {
        return true;
    }
    if(num%2==0 || num%3==0)
    {
        return false;
    }
    for(int i=5; i*i<=num; i+=6) 
    {
    if(num%i == 0 || num%(i+2) == 0)
    {
        return false;
    }
    }
    return true;
}
int main()
{   int n;
    bool ans;
    cout<<"Enter the number you want to is prime or not : "<<endl;
    cin>>n;
    ans=check_prime(n);
    if(ans==1)
    {
        cout<<"The number "<<n<<" is prime "<<endl;
    }
    else{
        cout<<"The number "<<n<<" is not prime "<<endl;
    }
    return 0;
}







// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter a number to check for prime : "<<endl;
//     cin>>n;
//     int c=0;
//     if(n==0 || n==1)
//     {
//         cout<<" Can't check for "<<n<<endl;
//     }
//     else
//     {
//     for(int i=2;i<=sqrt(n);i++)
//     {
//         if(n%i==0)
//         {
//             c++;
//         }
//     }
//     if(c==0)
//     {
//         cout<<"Prime number :)"<<endl;
//     }
//     else{
//         cout<<"Not prime "<<endl;  
//     }
//     }
//     return 0;
// }