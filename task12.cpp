#include <iostream>
using namespace std;
int main()
{
int width,height,no_of_square_meters;
cout<<"Number of square meters you can paint: ";
cin>>no_of_square_meters;
cout<<"Width of the single wall (in meters): ";
cin>>width;
cout<<"Height of the single wall (in meters): ";
cin>>height;
int X=width*height;
int Z=no_of_square_meters/X;
cout<<"Number of walls you can paint: "<<Z;
}