#include<iostream>
#include<math.h>
using namespace std;
//my prog

int fact(int n)
{
    if (n== 1)
        return 1;
    else
        return n*fact(n-1);
}

int WinMain()
{   
    int num,i,ans;
    cout<<"Enter the number you want to find factorial of"<<endl;
    cin>>num;
    ans =num;
    for(i=(num-1);i!=0;i--)
    {   
        ans *= i;
        
    }
    
    cout<<"The factorial of "<<num<<" is equal to "<<ans<<endl;
    cout<<"By Recursion : The factorial of "<<num<<" is equal to "<<fact(num)<<endl;
    
    return 0;
}