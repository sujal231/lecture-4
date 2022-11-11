#include<iostream>
using namespace std;

class time2;
class time1 {
	private :
		
    int hours1;
    int minutes1;
    int seconds1; 
    
    public :
    setter()
	{
		cout<<"Enter the hours:-";
		cin>>hours1;
		cout<<"Enter the minutes:-";
		cin>>minutes1;
		cout<<"Enter the seconds:-";
		cin>>seconds1;
	
	}
	friend void add(time1 , time2 );
};
class time2 {
	private :
		
    int hours2;
    int minutes2;
    int seconds2; 
    
    public :
    setter()
	{
		cout<<"Enter the hours:-";
		cin>>hours2;
		cout<<"Enter the minutes:-";
		cin>>minutes2;
		cout<<"Enter the seconds:-";
		cin>>seconds2;
	

	}
	friend void add(time1 , time2 );
};

void add(time1 T1,time2 T2)
{
	int seconds;
	int minutes;
	int hours;
    seconds=T1.seconds1+T2.seconds2;
    minutes=T1.minutes1+T2.minutes2 + seconds/60;;
    hours= T1.hours1+T2.hours2 + (minutes/60);
    minutes %=60;
    seconds %=60;
    cout<<hours<<":"<<minutes<<":"<<seconds;
}

main()
{
	time1 T1;
	T1.setter();
	
	time2 T2;
	T2.setter();
	
	add(T1,T2);
}
