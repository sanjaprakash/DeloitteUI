#include<iostream>
using namespace std;
class Student
{
	int id,m1,m2,m3,sum;
	string name;
	float avg;
	public:
		void getDetails()
		{
			cout<<"Enter Student id:"<<endl;
			cin>>id;
			cout<<"Enter Student name:"<<endl;
			cin>>name;
			cout<<"Enter Marks in subject-1:"<<endl;
			cin>>m1;
			cout<<"Enter Marks in subject-2:"<<endl;
			cin>>m2;
			cout<<"Enter Marks in subject-3:"<<endl;
			cin>>m3;
		
		}
		void Marks()
		{
			sum=m1+m2+m3;
			avg=sum/3;
			
		}
		void printDetails()
		{
			
			cout<<id<<"  |  "<<name<<"  |       "<<m1<<"  |    "<<m2<<"  |    "<<m3<<"  |   "<<sum<<"  |     "<<avg<<endl;
		}
};

int main()
{ 
    int i,n;
	cout<<"Enter the number of the student"<<endl;
	cin>>n;
	cout<<"enter student details"<<endl;
	Student stu[n];
	for(i=0;i<n;i++)
	{
		stu[i].getDetails();
		stu[i].Marks();
		
	}
		cout<<"ID    NAME    MARKS_1   MARKS_2   MARKS_3   TOTAL   AVERAGE"<<endl;
	for(i=0;i<n;i++)
	{
	stu[i].printDetails();
	}
}
