#include<iostream>
using namespace std;
int main()
{ 
 int age;
 cout<<"Enter your age : ";
 cin>>age;
 if(age>=18)
  cout<<"\nYou are eligible to vote.";
 else
  cout<<"\nYou are not eligible to vote.";
 return 0;
}
