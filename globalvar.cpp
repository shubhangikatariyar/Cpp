#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
//my prog: Fuction Overloading (Polymorphism)

//int global_var=10;

int funcx(int global_var)
{
    global_var= 2* global_var; 
}

int WinMain()
{
    int global_var = 10;
    global_var= 2+ global_var;
    cout<<"Value of global variable is "<<global_var<<endl;
    funcx(global_var);
    cout<<"Value of global variable is "<<global_var<<endl;
    return 0;
}