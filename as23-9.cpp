#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter two numbers";
    cin>>num1>>num2;
    if(num1>num2)
        cout<<"max is "<<num1;
    else
        cout<<"max is "<<num2;
    return 0;
}