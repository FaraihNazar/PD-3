#include <iostream>
using namespace std;
int main()
{
string name;
float weight;
cout<<"Enter the Name of the Person: ";
cin>>name;
cout<<"Enter the target weight loss in kilograms: ";
cin>>weight;
float days;
float lose_in_weight=weight*15;
cout<<name<<" will need "<<lose_in_weight<<" days to lose "<< weight<<" kg of weight by following the doctor's suggestions";
}