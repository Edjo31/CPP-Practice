
#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;
int id;
struct Student{
	int id;
	string fullName;
	int age;
 	
};


 vector<Student> student;
 
 void addStudent();
 void tblStudent();
 void editStudent();
 void deleteStudent();
 void showStudent();
 void menu();
 
 int main(){
 	
 	menu();
 	return 0;
 }
 	void menu(){
 		int index;
 		
 		cout<<" \n....Student form ....\n";
 		cout<<"1) Add student \n";
 		cout<<"2) Edit student \n";
 		cout<<"3) Delete student\n";
 		cout<<"4) Show student\n";
 		cin>>index;
 		
 		switch(index){
 			case 1:{
 				addStudent();
				break;
			 }
			 case 2:{
			 	editStudent();
				break;
			 }
			 
			 case 3:{
			 	deleteStudent();
				break;
			 }
			 
			 case 4:{
			 	showStudent();
				break;
			 }
		
		 }
 		
 		
	 }
	void addStudent(){
		
		int index;
		string name;
		int age;
		Student newStudent;
	
		cout<<"...Add student... \n";
		cout<<"student number to add ? :";
		cin>>index;
		cin.ignore();
		for(int i=0;i<index;i++){
		id++;
		newStudent.id=id;
		cout<<"Name:";
		getline(cin,name);
		cout<<"Age:";
		cin>>age;
		newStudent.fullName=name;
		newStudent.age=age;
		
		student.push_back(newStudent);
		cin.ignore();
		}
		
		menu();
	}
 	void tblStudent(){
 		
 		if(student.size()<=0){
 			cout<<"No data..";
 			
 		
		 }
		 else{
		 	
		 	for(int i=0;i < student.size();i++){
		 		
		 		  cout << "\n";
        cout << "\tStudents #" << student[i].id<< endl;
        cout << "\t------------------------" << endl;
        cout << "\t\t----" << student[i].fullName << "----" << endl;
        cout << "\t\t----" << student[i].age << "----" << endl;
        cout << "\t------------------------" << endl;
        cout << "\n";
		 		
		 		
		 		
		 		
			 }
			
		 }
 		
 		
	 }
 	void editStudent(){
 		
 		int index;
 		string name;
 		int age;
 		if(student.size()<=0){
 			tblStudent();
 			menu();
		 }
		 else{
		 	cout<<"....Edit....\n";
		 	tblStudent();
		 	cout<<"Select the student you want to edit:";
		 	cin>>index;
		 	cin.ignore();
		 	for(int i=0;i<student.size();i++){
		 		
		 		if(student[i].id==index){
		 			
		 			cout<<"Edit name:";
		 			getline(cin,name);
		 			cout<<"Edit age:";
		 			cin>>age;
		 			student[i].fullName=name;
		 			student[i].age=age;
		 			cout<<"Successful edit";
		 			
		 		
				 }
				 else{
				 	cout<<"student not found\n";
				 
				 }
			 }
			 menu();
		 }
 	
 		
	 }
 	void deleteStudent(){
 		
 	if(student.size()<=0){
 		tblStudent();
 		menu();
	 }
	 
	 else{
	 		int index;
 		cout<<"....Delete....\n";
 		cout<<"Select the student you want to delete:";
 		cin>>index;
 		cin.ignore();
 		
 		for(int i=0;i<student.size();i++){
 			
 			if(student[i].id==index){
 				
 				student.erase(student.begin()+i);
 				cout<<"Successful delete";
 				break;
			 }
			 else{
			 	cout<<"student not found";
			 	break;
			 }
			 
		 }
 		menu();
	 }
 		
	 }
 	void showStudent(){
 		
 		tblStudent();
 		
 		menu();
	 }
 
 
 
 
 
