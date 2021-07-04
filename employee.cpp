#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<math.h>
using namespace std;
//my prog

struct employee {
    int empid;
    char empname[10];
    float salary;
}s[5];
int WinMain(){
    int i;
    //struct employee s[5];

    for(i=0;i<5;i++){

        cout<<"Enter Employee ID \n";
        cin>> s[i].empid ;
        cout<<"Enter Employee name\n";
        cin>>s[i].empname;
        cout<<"Enter Employee salary\n";
        cin>> s[i].salary ;
        

    }
    for(i=0;i<5;i++){
    cout<<setw(10)<<s[i].empid<<setw(20)<<s[i].empname<<setw(15)<<s[i].salary<<endl ;
    }
    return 0;
}