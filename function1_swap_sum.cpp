#include<iostream>
#include<math.h>
using namespace std;
//my prog

float summ(int num1, int num2)
{
    
    float sum= num1 + num2;
    return sum;
    //cout<<"Sum = "<< sum <<endl;
}

int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout << "Value after swapping of first number is "<< x << "and value of second number is"<<y << endl;
}

int WinMain(){
    float sum;
    int a, b;
    cout<<"Enter two numbers a & b"<<endl;
    cin>> a >> b ;
    cout<<"Values given by user for first number is "<<a<<" and second number is "<< b << endl;
    //cout<<"Enter second number to be added" <<endl;
    //cin>> b ;
    //cout<<"Sum="<<summ(a,b);

    swap(&a,&b);
    cout<<"Values after swapping : a ="<<a<<" b = "<<b<< endl;
    return 0;
}