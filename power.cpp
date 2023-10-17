#include <iostream>
using namespace std;
double power(double base,int pow=2)
{
    double ret=1;
    for(int i=0;i<pow;i++)
        {
            ret*=base;
        }
    return ret;
}
int main() {
    double res,base; 
    int p; 
    
   // std::cout << "Hello world!" << std::endl;
   cout<<"enter the base :";
    cin>>base;
    cout<<"\nenter the power of your base: ";
    cin>>p;
    res=power(base,p);
    cout<<"\nThe result is : "<<res<<endl;
    cout<<"\nthe value of 2 to power 10 is : "<<power(2,10)<<endl;
    /*int b=8;
    double p=3;
    cout<<power(b,p);*/
    return 0;
}
