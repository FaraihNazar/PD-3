#include <iostream>
using namespace std;
int main()
{
int number;
cout<<"Enter a 4-digit number: ";
cin>>number;
int Z=number/1000;
cout<<Z<<endl;
int A=number%1000;
cout<< A<< endl;
int B= A/100;
cout<<  B << endl;
int C= A % 100;
cout<<  C << endl;
int D=C/10;
cout<<D<<endl;
int E=C%10;
cout<<E<<endl;

cout<<"Sum of the individual digits: "<<Z+B+D+E<<endl;
}