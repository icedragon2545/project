#include <iostream>
#include <string>
using namespace std;
void insertsubject();
void insertstudent();
void insertgrade();
void report();
void mainmenu();
string student[100][4];
string subject[100][3];
int credit[100];
int count = 0;
int count_subject = 0;

int main()
{
	mainmenu();




	system ("pause");
	return 0;
}


void insertstudent()
{
	system ("cls");
	char select;
	cout << "Enter id student : ";
	cin >> student[count][0];
	cout << "Enter Name : ";
	cin >> student[count][1];
	cout << "Enter department : ";
	cin >> student[count][2];
	cout << "Enter section : ";
	cin >> student[count][3];
	count++;
	cout << "1 = again / 2 = back : ";
	cin >> select;
	switch(select){
		case'1':
			insertstudent();
			break;
		case'2':
			mainmenu();
			break;
	}
}
void insertsubject()
{
	
	system ("cls");
	char select;
	cout << "Enter id subject : ";
	cin >> subject[count_subject][0];
	cout << "Enter Name subject : ";
	cin >> subject[count_subject][1];
	cout << "Enter Credit : ";
	cin >> subject[count_subject][2];
	count_subject++;
	cout << "1 = again / 2 = back : ";
	cin >> select;
	switch(select){
		case'1':
			insertsubject();
			break;
		case'2':
			mainmenu();
			break;
	}
}
void insertgrade()
{
	char select;
	string id,idsubject;
	system ("cls");
	cout << "Enter id student : ";
	cin >> id;
	for (int i=0; i<count;i++) {
		if (student[i][0]==id){
			cout << "Enter subject : ";
			cin >> idsubject;
		}
	}
	cout << "Enter ";
	cout << "1 = again / 2 = back : ";
	cin >> select;
	switch(select){
		case'1':
			insertgrade();
			break;
		case'2':
			mainmenu();
			break;
	}
}
void report()
{
	system ("cls");

}
void mainmenu()
{	
	system ("cls");
	char select;
	cout << "1.Insert Student" <<endl;
	cout << "2.Insert Subject" <<endl;
	cout << "3.Insert Grade"   <<endl;
	cout << "4.Report"   <<endl;
	cout << "5.Exit"           <<endl;
	cout << "Select : ";
	cin >> select;
	switch(select){
		case'1':
			insertstudent();
			break;
		case'2':
			insertsubject();
			break;
		case'3':
			insertgrade();
			break;
		case'4':
			report();
			break;
		case'5':
			exit(0);
			break;
	}
}

