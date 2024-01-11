/*
1. WAP to get and display 5 Employees
information using class and object by including
below mentioned attributes:
- emp_id
- emp_name
- emp_role
- emp_age
- emp_salary
- emp_experience
- emp_city
- emp_company_name
*/

#include<iostream>
#include<string.h>
using namespace std;

// class declaration
class Employees {
	
	//claa attributes
	public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experince;
		char city[100];
		char company_name [100];
		
};

int main(){
	int i;
	Employees e;
 for(i<1;i<6; i++){
 	
 	cout<<"enter id :-";
 	cin>>e.id;
 	cout<<"enter name :-";
 	cin>>e.name;
 	cout<<"enter role :-";
 	cin>>e.role;
 	cout<<"enter salary :-";
 	cin>>e.salary; 	
	 cout<<"enter experince :-";
 	cin>>e.experince;
 	cout<<"enter city :-";
 	cin>>e.city;
 	cout<<"enter company_name :-";
 	cin>>e.company_name;
 	
 	cout<<e.id<<endl;
 	cout<<e.name<<endl;
 	cout<<e.role<<endl;
 	cout<<e.salary<<endl;
 	cout<<e.experince<<endl;
 	cout<<e.city<<endl;
 	cout<<e.company_name<<endl;
 	
 }
 return 0;
	
	
	
}
