#include <iostream>
using namespace std;
int cubic(int x)
{
    return x*x*x;
}
double cubic(double y)
{
    return y*y*y;
}
int main()
{

    int a1,x;
    double a2,y;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Enter the number:";
    cin>>y;
   a1= cubic(x);
    a2=cubic(y);
    cout<<"The cubic value of the whole numbers is"<<a1<<"\n";
    cout<<"The cubic value of the Real number is "<<a2<<"\n";

}
