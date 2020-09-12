#include<iostream>
using namespace std;
class Student
{
	    private:
		int roll_no;
		protected:
		char course[20];
		public:
  		int get_roll_no()
		  {
		  	cin>>roll_no;
		  }
  		int show_roll_no()
		  {
		  cout<<roll_no;	
		  }
			
};
class Result:public Student
{
	private:
		int marks[3];
		public:
			 void get_data()
              { cout<<"Enter roll no:";
				get_roll_no();
				cout<<"Enter the course:";
				cin>>course;
				cout<<"Enter the marks:";
				for(int i=0;i<3;i++)
				{
					cin>>marks[i];
				 } 
			}
			void display()
			{   cout<<"Displaying Details:"<<endl;
			    cout<<"Roll no:";
				show_roll_no();
     			cout<<endl;
				cout<<"Course:";
			    cout<<course;
			    cout<<endl;
				cout<<"Marks:";
				for(int i=0;i<3;i++)
				{
					cout<<marks[i];
                    cout<<endl;
				}
			}
};
main()
{
	Result r;
	r.get_data();
	r.display();
	cout<<"A.Aghanaashaa"<<endl<<"18BET1027"<<endl;
	
}
