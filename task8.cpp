#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int work_day,gametime,hrs,mins,diff;
	work_day=365-holidays;
	gametime=(work_day*63)+(holidays*127);
	diff=30000-gametime;
	mins=diff%60;
	hrs=diff/60;
	if(gametime>=30000)
	{
		cout<<"Tom will run away" <<endl;
		cout<<(-1*hrs) <<" hours and " <<(-1*mins) <<" minutes for play";
	}
	else
	{
		cout<<"Tom sleeps well" <<endl;
		cout<<hrs <<" hours and" <<mins <<" minutes less for play";
	}

}