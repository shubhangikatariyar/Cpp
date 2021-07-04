#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
//my prog: Fuction Overloading (Polymorphism)

int global=10;

int func(int &x, int y)
{
    x = x-y;
    y= x*10;
    cout<<x<<','<<y<<endl;
}

int WinMain()
{
    int global = 7;
    func(::global,global);
    cout<<global<<','<<::global<<endl;
    func(global,::global);
    cout<<global<<','<<::global<<endl;
    return 0;
}