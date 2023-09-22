#include <iostream>
using namespace std;
int main()
{
float i,p;
cout<<"Enter Imposter Count: ";
cin>>i;
cout<<"Enter Player Count: ";
cin>>p;
float X=i/p;
float chance_of_being_imposter=100*X;
cout<<"Chance of being an imposter: "<<chance_of_being_imposter<<"%";
}