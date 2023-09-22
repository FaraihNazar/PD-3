#include <iostream>
using namespace std;
int main()
{
float vegetable_price,fruit_price;
float kg_vegetables,kg_fruits;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegetable_price;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruit_price;
cout<<"Enter total kilograms of vegetables: ";
cin>>kg_vegetables;
cout<<"Enter total kilograms of fruits: ";
cin>>kg_fruits;
float X=fruit_price/1.94;
float Y=(kg_fruits)*X;
float A=vegetable_price/1.94;
float B=(kg_vegetables)*A;
cout<<"Total earnings in Rupees (Rps): "<<Y+B<<endl;
}