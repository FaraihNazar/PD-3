#include <iostream>
using namespace std;
int main()
{
float initial_velocity,final_velocity,acceleration,time;
cout<<"Enter Initial Velocity (m/s): ";
cin>>initial_velocity;
cout<<"Enter Acceleration (m/s^2): ";
cin>>acceleration;
cout<<"Enter Time (s): ";
cin>>time;
float X=acceleration*time;
final_velocity=X+initial_velocity;
cout<<"Final Velocity (m/s): "<<final_velocity;
}