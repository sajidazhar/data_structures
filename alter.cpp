#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=5;
    cout<<"before swapping \n";
    cout<<a<<" "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nafter swapping \n";
    cout<<a<<" "<<b;
    return 0;
    
}

