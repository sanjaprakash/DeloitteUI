#include<iostream>
using namespace std;
class person
{
private:
    char name[15], address[15];
public:
    void getdata()
    {
        cout<<"\nEnter Name: ";
        cin>>name;
        cout<<"\nEnter address: ";
        cin>>address;
    } 
    void showdata()
    {
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Address: "<<address;
    }
};
class employee:public person
{
private:
    int empID;
public:
    void getdata()
    {
        person::getdata();
        cout<<"\nEnter employee ID ";
        cin>>empID;
    }
    void showdata()
    {
        person::showdata();
        cout<<endl<<"Employee ID: "<<empID;
    }
};
class manager: public employee
{
private:
    char qual[10];
public:
    void getdata()
    {
        employee::getdata();
        cout<<"\nEnter qualification: ";
        cin>>qual;
    } 
    void showdata()
    {
        employee::showdata();
        cout<<"\nQualification: "<<qual;
    }
};
int main()
{
    manager obj;
    obj.getdata();
    obj.showdata();
    return 0;
}
