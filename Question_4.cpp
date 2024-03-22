#include <iostream>
using namespace std ;
int main (){
    int h,r;
    cout<<"Enter Radius:";
    cin>>r;
    cout<<"Enter Height:";
    cin>>h;
    float p=3.14159265359;
    float V=p*r*r*h;
    cout<<"Volume of Cylinder is:"<<V;
    return 0;
}