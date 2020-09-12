#include<iostream>
using namespace std;
class Student
{   char r,j;
	protected:
		int roll_no;
	     char name[20];
		  char course[20];
		Student()
		{
		roll_no=0;
		name[20]=0;
		course[20]=0;	
		};
		Student(int x,char A,char B)
        {
			roll_no=x;
			name=A[j];
			course=B[r];
		}
};
class Marks
{
	protected:
	int marks[3];
	public:
		Marks()
	    {
		  for(int i=0;i<3;i++)
		{
			marks[i]=0;
		}
        }
        Marks(int n)
        {
        	for(int i=0;i<3;i++)
        	{
        		marks[i]=n;
        	}
		}
		void total()
		{
			int r;
			r=marks[1]+marks[2]+marks[3];
		}
};

class Result:public Student,public Marks
{
	Result()
	{
		
	}
	void display()
		{
			cout<<"Roll no:"<<roll_no;
			cout<<"Name:"<<name;
			cout<<"Marks:";
			for(int i=0;i<3;i++)
			{
				cout<<marks[i]<<endl;
			}	
			cout<<"Total marks:"<<r;
		}
};
main()
{
	Result r;
	r.dispay();	
}
