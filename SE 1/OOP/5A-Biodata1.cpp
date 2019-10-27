#include<iostream> 
#include<stdio.h> 
#include<string.h> 
using namespace std; 

class  Personal_record       //Base class 1 
{ 
                                                                     
protected: 
	   char name[50],address[50],email[40]; 
	   long int ph_no; 



}; 

class Professional_record     //Base class 2 
{ 

protected: 
	   char comp_name[40],comp_address[50]; 
	   long int comp_phno; 
	   float experience;	    

}; 

class Academic_record		//base class 3 
{ 
protected: 	 
	   char qualification[40],univ_name[30]; 
	   int passing_year; 
	   float percentage; 

}; 

//Derived class 
//MULTIPLE INHERITANCE 
class Biodata:public Personal_record,public Professional_record, public Academic_record 
{ 
public: 
	void accept();             // no value will return so void 
	void display(); 

}; 

void Biodata::accept() 
{ 
//enter the personal info 

	cout<<"Enter the full name :"<<endl; 
	cin.getline(name,50); 
	cout<<"Enter the address: "<<endl; 
	cin.getline(address,50); 
	cout<<"Enter the phone no:"<<endl; 
	cin>>ph_no; 
	cout<<"Enter the emailid:"<<endl; 
	cin>>email; 
        cin.get(); 
//Enter the professinal info 
	 
	cout<<"Enter the company name:"<<endl; 
	cin.getline(comp_name,40); 
	cout<<"Enter the company address:"<<endl; 
	cin.getline(comp_address,50); 
	cout<<"Enter the phone no:"<<endl; 
	cin>>comp_phno; 
	cout<<"Enter the experience:"<<endl; 
	cin>>experience; 
	cin.get(); 
//Enter the Acadameic info 

	cout<<"Enter qualification:"<<endl; 
	cin>>qualification; 
	cout<<"Enter university name:"<<endl; 
	cin>>univ_name; 
	cout<<"Enter passing year:"<<endl; 
	cin>>passing_year; 
	cout<<"Enter percentage:"<<endl; 
	cin>>percentage; 
	 
} 

void Biodata::display() 
{ 

// display personal info 
	 
	cout<<"\n*****************PERSONAL INFORNATION********************"; 
        cout<<"\n name:"; 
	cout<<name; 
	cout<<"\n address:"; 
	cout<<address; 
	cout<<"\n Phone no:"<<ph_no; 
	cout<<"\n Email-id:"<<email; 
	 
	 
	cout<<"\n****************PROFESSIONAL INFORMATION****************"; 
	cout<<"\n company name:"; 
	cout<<comp_name; 
	cout<<"\n company address:"; 
	cout<<comp_address; 
	cout<<"\n company phone no:"<<comp_phno; 
	cout<<"\n experience:"<<experience; 
	 
	 
	cout<<"\n****************ACADEMIC INFORMATION********************"; 
	cout<<"\n qualification:"<<qualification; 
	cout<<"\n university name:"<<univ_name; 
	cout<<"\n passing year:"<<passing_year; 
	cout<<"\n percentage:"<<percentage; 
} 

int main() 
{ 

Biodata B; 
	cout<<"\n The information of biodata"<<endl; 
	B.accept(); 
	cout<<"*************DISPLAY**********"; 
	B.display(); 
return 0; 
} 
/*Create employee bio-data using following classes i) Personal record ii))Professional record iii) 
Academic record .Assume appropriate data members and member function to accept required 
data & print bio-data. Create bio-data using multiple inheritance using C++.*/ 

#include<iostream> 
#include<stdio.h> 
#include<string.h> 
using namespace std; 

class Personal_record       //Base class 1 
{ 
                                                                     
protected: 
	   char name[50],address[50],email[40]; 
	   long int ph_no; 



}; 

class Professional_record     //Base class 2 
{ 

protected: 
	   char comp_name[40],comp_address[50]; 
	   long int comp_phno; 
	   float experience;	    

}; 

class Academic_record		//base class 3 
{ 
protected: 	 
	   char qualification[40],univ_name[30]; 
	   int passing_year; 
	   float percentage; 

}; 

//Derived class 
//MULTIPLE INHERITANCE 
class Biodata:public Personal_record,public Professional_record, public Academic_record 
{ 
public: 
	void accept();             // no value will return so void 
	void display(); 

}; 

void Biodata::accept() 
{ 
//enter the personal info 

	cout<<"Enter the full name :"<<endl; 
	cin.getline(name,50); 
	cout<<"Enter the address: "<<endl; 
	cin.getline(address,50); 
	cout<<"Enter the phone no:"<<endl; 
	cin>>ph_no; 
	cout<<"Enter the emailid:"<<endl; 
	cin>>email; 
        cin.get(); 
//Enter the professinal info 
	 
	cout<<"Enter the company name:"<<endl; 
	cin.getline(comp_name,40); 
	cout<<"Enter the company address:"<<endl; 
	cin.getline(comp_address,50); 
	cout<<"Enter the phone no:"<<endl; 
	cin>>comp_phno; 
	cout<<"Enter the experience:"<<endl; 
	cin>>experience; 
	cin.get(); 
//Enter the Acadameic info 

	cout<<"Enter qualification:"<<endl; 
	cin>>qualification; 
	cout<<"Enter university name:"<<endl; 
	cin>>univ_name; 
	cout<<"Enter passing year:"<<endl; 
	cin>>passing_year; 
	cout<<"Enter percentage:"<<endl; 
	cin>>percentage; 
	 
} 

void Biodata::display() 
{ 

// display personal info 
	 
	cout<<"\n*****************PERSONAL INFORNATION********************"; 
        cout<<"\n name:"; 
	cout<<name; 
	cout<<"\n address:"; 
	cout<<address; 
	cout<<"\n Phone no:"<<ph_no; 
	cout<<"\n Email-id:"<<email; 
	 
	 
	cout<<"\n****************PROFESSIONAL INFORMATION****************"; 
	cout<<"\n company name:"; 
	cout<<comp_name; 
	cout<<"\n company address:"; 
	cout<<comp_address; 
	cout<<"\n company phone no:"<<comp_phno; 
	cout<<"\n experience:"<<experience; 
	 
	 
	cout<<"\n****************ACADEMIC INFORMATION********************"; 
	cout<<"\n qualification:"<<qualification; 
	cout<<"\n university name:"<<univ_name; 
	cout<<"\n passing year:"<<passing_year; 
	cout<<"\n percentage:"<<percentage; 
} 

int main() 
{ 

Biodata B; 
	cout<<"\n The information of biodata"<<endl; 
	B.accept(); 
	cout<<"*************DISPLAY**********"; 
	B.display(); 
return 0; 
}

