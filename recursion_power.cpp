#include<iostream>
using namespace std;
double power(double base, int pow=2)
{
if(pow==0)
    return 1;
else
    return base*power(base,pow-1);
}
int main()
{
double base,pow;
cout<<"enter a number: ";
cin>> base;
cout<<"enter power:";
cin>>pow;
return 0;
}
