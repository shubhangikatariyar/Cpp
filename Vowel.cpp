#include<iostream>
#include<string.h>
using namespace std;
//my prog
int WinMain(){
    char word[20], vowel;
    int i,len, j=0;
    cout<<"Enter word \n";
    gets(word);
    len = strlen(word);
    for(i=0;i<len;i++)
    {
        switch(word[i])
        {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': j+=1;
        break;
        default : break;
        }
        
    }
    cout<<"got number of vowel in word values as = "<< j;
    return 0;
}
