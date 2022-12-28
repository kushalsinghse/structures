/*
Write a program to add two complex numbers using structures to function.
*/

#include<iostream>

using namespace std;

struct add
{
    int real;
    int img;

};



int main(){

    struct add a,b,c;

    cout<<"In complex number a+ib Enter a: ";
    cin>>a.real;
    cout<<"In complex a+ib enter b: ";
    cin>>a.img;

    cout<<"  "<<endl;

    cout<<"In complex number c+id Enter c: ";
    cin>>b.real;
    cout<<"In complex c+id enter d: ";
    cin>>b.img;

    c.real=a.real+b.real;
    c.img=a.img+b.img;
    cout<<"("<<a.real<<" + "<<a.img<<"i) + ("<<b.real<<" + "<<b.img<<" i) = "<<c.real<<" + "<<c.img<<"i"<<endl;

return 0;

}
