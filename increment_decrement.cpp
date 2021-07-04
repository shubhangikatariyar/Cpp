#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<math.h>
using namespace std;


int WinMain()
{
    int a=10,x,*b;
    b = &a;
    //cout<<a++<<++a<<*b<<a++<< endl;
    x = a++ + a++ + a;//+ ++a + ++a;
    cout<<x<<endl;
    cout<<a<<endl;
    return 0;

}