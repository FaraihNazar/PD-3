#include <iostream>
using namespace std;
int main()
{
int number;
cout<<"Enter a 4-digit number: ";
cin>>number;
int Z=number/1000;
int A=number%1000;
int B= A/100;
int C= A % 100;
int D=C/10;
int E=C%10;
cout<<"Sum of the individual digits: "<<Z+B+D+E<<endl;
}
