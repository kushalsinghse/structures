#include<iostream>

using namespace std;

struct student
{
    int rollno;
    int  rank;
    string grade;
    string school;
};


int main(){
    struct student kushal;

    kushal.rollno= 01;
    kushal.rank= 03;
    kushal.grade= "vii";
    kushal.school="Narayana olympiad";

    cout<<kushal.rollno<<endl;
    cout<<kushal.rank<<endl;
    cout<<kushal.grade<<endl;
    cout<<kushal.school<<endl;



return 0;

}