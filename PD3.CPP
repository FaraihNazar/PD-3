#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the number of sides of the polygon: ";
cin>>n;
float SumOfAllAngles=(n-2)*180;
cout<<"The sum of internal angles of a "<<n<<"-sided polygon is: "<<SumOfAllAngles<<" degrees";
}

