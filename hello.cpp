#include<iostream>
using namespace std;

double calculateHighLimit(double num,double percentage)
{
    return num+(num*percentage)/100;
}
double calculateLowLimit(double num,double percentage)
{
    return num-(num*percentage)/100;
}
int main()
{
    double num,percentage;
    cout<<"Enter number :";
    cin>>num;
    cout<<"Enter percentage value:";
    cin>>percentage;
    cout<<"High limit is "<<calculateHighLimit(num,percentage)<<endl;
    cout<<"Low limit is "<<calculateLowLimit(num,percentage)<<endl;
}