#include <iostream>
using namespace std;
int main()
{
int age;
int no_of_moves;
cout<<"Enter the person's age: ";
cin>>age;
cout<<"Enter the number of times they've moved: ";
cin>>no_of_moves;
float X=(age/(no_of_moves+1));
cout<<"Average number of years lived in the same house: "<<X;
}