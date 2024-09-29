#include<iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
main()
{
 int redRose,whiteRose,tulip;
	cout<<"Red Rose: ";
	cin>>redRose;
	cout<<"White Rose: ";
	cin>>whiteRose;
	cout<<"Tulip: ";
	cin>>tulip;
	flowerShop(redRose,whiteRose,tulip);
}
void flowerShop(int redRose,int whiteRose,int tulip)
{ 
 float price,afterdiscount;
 price=(redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
	if(price>200)
	{
		afterdiscount=price-(price)*20/100;
		cout<<"Original Price: $" <<price <<endl;
		cout<<"Price after discount: $" <<afterdiscount;
	}
	else
	{
		cout<<"Original Price: $" <<price <<endl;
		cout<<"No discount applied.";
	}
}
 



