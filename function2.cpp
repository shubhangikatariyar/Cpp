#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
//my prog: Fuction Overloading (Polymorphism)


float area(float r){
        
        //float A = 3.14*(pow(r,2));
        //return A;
        return (3.14*(pow(r,2)));
}

float area(int a,int b){
        
        return (a*b);
}

float area(int a){
        
        return (a*a);
}

float area(int b,float h){
        
        return (0.5*b*h);
}



int WinMain(){
    
    int option,flag,a,b;
    char ans;
    float Area, r, h;

    do {
        
        cout <<"Choose the shape for area of calculation" <<endl;
        cout<<"Select \n 1. Circle \n 2. Rectangle \n 3. Square \n 4. for triangle \n"<<endl;
        cin>>option;
        flag=0;

        switch(option){

        case  1:
                cout<<"Enter radius :"<<endl;
                cin>>r;
                Area = area(r);
                break;

        
        case  2: 
                cout<<"Enter width and length :"<<endl;
                cin>>a>>b;
                 Area = area(a,b);
                 break;

        case  3: 
                cout<<"Enter side of square"<<endl;
                cin>>a;
                 Area = area(a);
                 break;

        case  4:

                cout<< "Enter base and height"<<endl;
                cin>>b>>h;
                Area = area(b,h);
                break;
        default : cout<<"Invalid Choice"<<endl;
                  flag=1;
        
        }
        if (flag == 0)
           cout<<"Area ="<<Area<< endl;  //IMP
        cout<<"Do you want to continue? (Y/N)"<< endl;
        cin>>ans;
        


    }while(ans == 'Y');


    return 0;
}