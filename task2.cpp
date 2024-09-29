#include<iostream>
using namespace std;
void Reverse(string TF);
main()
{
   string TF;
	cout<<"Enter 'true' or 'false': ";
	cin>>TF;
	Reverse(TF);
}
void Reverse(string TF)
{
  if(TF=="true")
	cout<<"false";
  else
 	cout<<"true";
}

