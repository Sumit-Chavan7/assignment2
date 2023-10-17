#include<iostream>
using namespace std;
double power(int base, int pow=2)
{
if(pow==0)
    return 1;
else
    return base*power(base,pow-1);
}
int main()
{
double base,
cout<<"enter a number: ";
cin>>
