/*
Write a program to store and print the roll no., name, age and marks of 15
 students using structure.
*/

#include<iostream>

using namespace std;

struct rnam
{
    int roll_number;
    string name;
    int age;
    double marks;

};


int main(){

    struct rnam stru[15];

  for(int i=0; i<=15; i++)
  {
    cout << "Student " << i+1 << endl;
    stru[i].roll_number = i+1;
    cout << "Enter name "<<endl;
    cin >> stru[i].name;
    cout << "Enter age "<<endl;
    cin >> stru[i].age;
    cout<<"Enter your marks"<<endl;
    cin>> stru[i].marks;
  }



return 0;

}