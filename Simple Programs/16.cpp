#include<iostream>
using namespace std;
int main ()
{
	int salary,gross,hra,da;
    cout<<"\n--------------------------";
	cout<<"\nEnter Employee's Basic Salary : ";
	cin>>salary;
	if(salary>= 10000 && salary<20000)
	{
		da=salary*20/100;
		hra=salary*80/100;
		gross=salary+da+hra;
	    cout<<"\nEmployee's Gross Salary is "<<gross<<endl;
	}
    else if(salary< 30000 && salary >=20000)
	{
		da=salary*25/100;
		hra=salary*90/100;
		gross=salary+da+hra;
	    cout<<"\nEmployee's Gross Salary is "<<gross<<endl;
	}
	else if(salary>=30000)
	{
		da=salary*30/100;
		hra=salary*95/100;
		gross=salary+da+hra;
	    cout<<"\nEmployee's Gross Salary is "<<gross<<endl;
	}
	else
	{
		cout<<"\nCriteria for Eligibility not met!!"<<endl;
	}
    cout<<"--------------------------\n";
    return 0;
}