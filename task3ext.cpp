#include<iostream>
using namespace std;
void ticketPrice(string name,float price);
main()
{
   float price;
   string name;
while(true)
{
	cout<<"Enter the name of country: ";
	cin>>name;
	cout<<"Enter the price of ticket in dollars: $";
	cin>>price;
        ticketPrice(name,price);
}
}
void ticketPrice(string name, float price)
{
float discount,priceaftdisc;
{
   if(name=="Pakistan")
{
 discount=(price)*5/100;
 priceaftdisc=price-discount;
 cout<<"Final ticket price after discount: $" <<priceaftdisc <<endl;
}
   else if(name=="Ireland")
{
 discount=(price)*10/100;
 priceaftdisc=price-discount;
 cout<<"Final ticket price after discount: $" <<priceaftdisc <<endl;
}		
  else if(name=="India")
{
 discount=(price)*20/100;
 priceaftdisc=price-discount;
 cout<<"Final ticket price after discount: $" <<priceaftdisc <<endl;
}
 else if(name=="England")
{
 discount=(price)*30/100;
 priceaftdisc=price-discount;
 cout<<"Final ticket price after discount: $" <<priceaftdisc <<endl;
}
 else if(name=="Canada")
{
 discount=(price)*45/100;
 priceaftdisc=price-discount;
 cout<<"Final ticket price after discount: $" <<priceaftdisc <<endl;
}
else
 cout<<"Invalid";
}
}