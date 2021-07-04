#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<math.h>
using namespace std;
//===========Q5==========

// void Change (int x[4],int i)
// {
//     x[i]=x[i]*i;
// }

// int WinMain()
// {   
//     int x[]= {11, 21, 31, 41};
//     for(int i =0; i< 4; i++)
//     {
//         Change(x,i);
//         cout<< x[i]<< "\n";
//     }


//     return 0;
// }


//=======Q6=========
// int WinMain()
// {   char x[10]="Difficult";
//     char *p = x;
//     char c;
//     c= ++*p++;
//     cout<<c<<endl;
//     return 0;
   
//     }



//==========Q7=============
int WinMain()
{   int x[]={10,20,33,40,50};
    int *p, **q, *t, sum;
    p=x;
    t=x+1;
    q= &t;
    
    cout<<**q;
    cout<<*p<<","<<**q<<","<<*t++<<endl;
    //sum = *p + **q  + *t++;
    sum = *p + *t++ + **q ;
    cout<< sum;
    return 0;
   
    }





    