#include <iostream>
using namespace std;
int main()
{
string name;
float c_ticket_price,a_ticket_price;
int a_tickets_sold,c_tickets_sold;
int charity;
cout<<"Enter the movie name: ";
cin>>name;
cout<<"Enter the adult ticket price: $";
cin>>a_ticket_price;
cout<<"Enter the child ticket price: $";
cin>>c_ticket_price;
cout<<"Enter the number of adult tickets sold: ";
cin>>a_tickets_sold;
cout<<"Enter the number of child tickets sold: ";
cin>>c_tickets_sold;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>charity;
cout<<"                                             "<<endl;
cout<<"Movie: "<<name<<endl;
float X=a_ticket_price*a_tickets_sold+c_ticket_price*c_tickets_sold;
cout<<"Total amount generated from ticket sales: $"<<X<<endl;
float Y=X*0.1;
cout<<"Donation to charity ("<<charity<<"%): $"<<Y<<endl;
float Z=X-Y;
cout<<"Remaining amount after donation: $"<<Z<<endl;
}