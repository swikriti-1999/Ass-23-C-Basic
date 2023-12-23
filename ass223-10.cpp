#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,sum=0;
    cout<<"enter 10 numbers";
    for(i=0;i<10;i++)
    cin>>arr[i];

    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}