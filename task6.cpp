#include<iostream>
using namespace std;
void longestTime(int h,int m);
main()
{
 int h,m;
	cout<<"Enter the number of hours: ";
	cin>>h;
	cout<<"Enter the number of minutes: ";
	cin>>m;
	longestTime(h,m);
}
void longestTime(int h,int m)
{
  int h_insec,m_insec;
  h_insec=h*3600;
  m_insec=m*60;
	if(h_insec>m_insec)
	{
		cout<<h;
	}
	else
	{	
		cout<<m;
	}
}


