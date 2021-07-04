#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
//my prog
int WinMain(){
    
    int option,flag;
    char ans;
    float Area, a ,r ,b, h;

    do {
        
        cout <<"Choose the shape for area of calculation" <<endl;
        cout<<"Select \n 1. Circle \n 2. Rectangle \n 3. Square \n 4. for triangle \n"<<endl;
        cin>>option;
        flag=0;

        switch(option){

        case  1:
                cout<<"Enter radius :"<<endl;
                cin>>r;
                Area = 3.14*(pow(r,2));
                break;

        
        case  2: 
                cout<<"Enter width and length :"<<endl;
                cin>>a>>b;
                 Area = a*b;
                 break;

        case  3: 
                cout<<"Enter side of square"<<endl;
                cin>>a;
                 Area = a*a;
                 break;

        case  4:

                cout<< "Enter base and height"<<endl;
                cin>>b>>h;
                Area = 0.5*b*h;
                break;
        default : cout<<"Invalid Choice"<<endl;
                  flag=1;
        
        }
        if (flag == 0)
           cout<<"Area ="<<Area<< endl;  
        cout<<"Do you want to continue? (Y/N)"<< endl;
        cin>>ans;
        


    }while(ans == 'Y');


    return 0;
}