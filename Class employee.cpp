#include<iostream>
using namespace std;
class employee
{
	int emp_no;
	string name;
	public:
		void put_data();
		void get_data();
};
void employee::get_data()
{

	cout<<"Enter the employee number"<<endl;
	cin>>emp_no;
	cout<<"Enter the employee name:"<<endl;
	cin>>name;
}
void employee::put_data()
{
	cout<<"Employee number:"<<emp_no<<endl;
	cout<<"Employee name:"<<name<<endl;
}
main()
{
	employee e[100];
	int n;
	cout<<"How many employees records are required??"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		e[i].get_data();
	}
	for(int i=0;i<n;i++)
	{
		e[i].put_data();
	}
cout<<"Harsh Vardhan"<<endl<<"18BET1037"<<endl;
return (0);
}
