/*
2. WAP to get and display 4 Cars information
using class and object by including below
mentioned attributes:
- car_id
- car_company_name
- car_color
- car_model
- car_release_year
*/

#include<iostream>
#include<string.h>
using namespace std;

// class declaration
class car {
	
	//claa attributes
	public:
		int id;
		char company_name[100];
		char color[100];
		int modal;
		int year;
		
		
};

int main(){
	int i;
	car c;
 for(i<1;i<6; i++){
 	
 	cout<<"enter id :-";
 	cin>>c.id;
 	cout<<"enter company name :-";
 	cin>>c.company_name;
 	cout<<"enter color :-";
 	cin>>c.color;
 	cout<<"enter modal :-";
 	cin>>c.modal; 	
	 cout<<"enter year :-";
 	cin>>c.year;
 	
 	
 	cout<<c.id<<endl;
 	cout<<c.company_name<<endl;
 	cout<<c.color<<endl;
 	cout<<c.modal<<endl;
 	cout<<c.year<<endl;
 	
 	
 }
 return 0;
	
	
	
}
