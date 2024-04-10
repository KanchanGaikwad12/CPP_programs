#include<iostream>
using namespace std;
class Employee
{
	private:
		int empid;
		double salary;
		
	public:
		Employee()
		{
			empid=0;
			salary=00.00;
		}
		Employee(int empid, double salary)
		{
			this->empid=empid;
			this->salary=salary;
		}
		void display()
		{
			cout<<"\n Emp id :"<<empid<<" salary :"<<salary<<endl;
		}
		void calsalary()
		{
			cout<<"\n calculate salary in employee class member function "<<endl;
		}
};
class Manager : public Employee
{
	private:
		double incentive;
		string deptname;
		
		public:
			Manager()
			{
				incentive=0.00;
				deptname="not_applicable";
			}
			Manager(int empid, double salary, double incentive, string deptname) : Employee(empid, salary)
			{
				this->incentive=incentive;
				this->deptname=deptname;
			}
			void display()
			{
	
				cout<<"\n Employee Incentive :"<<incentive<<" Department name: "<<deptname<<endl;
			}
			void calsalarymanager()
			{
				cout<<"\n Calculate salaray function in manager class "<<endl;
			}
};
int main()
{
	Employee e;
	e.calsalary();
	e.display();
	
	Employee e1(100, 50000.0);
	e1.calsalary();
	e1.display();
	
	Manager mgr;
	mgr.calsalarymanager();
	mgr.display();
	
	Manager mgr1(102, 2000000, 100.0, "IT");
	mgr1.calsalarymanager();
	mgr1.display();
	
	return 0;
}
