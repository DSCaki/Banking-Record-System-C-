#include <Windows.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

struct First{

	string user;
	struct{
		char username[3];
		char password[3];
	}signup;

	struct{
		char username2[3];
		char password2[3];
	}login;

	struct{
		char firstname[3];
		char lastname[3];
	}name;

};

int option=0;
int inlog;

int main () 
{
	First A;
	cout << "LOADING PROGRAM...";
	Sleep (2000);
	cout << ".....";
	Sleep (2000);
	cout << ".....";
	Sleep (3000);
	cout << ".....";
	Sleep (2000);
	cout << ".....";
	Sleep (1000);

	cout << "" << endl;

	system("cls");
	cout << "**********************************************" << endl;
	cout << "WELCOME TO  OUR PROGRAM! PLEASE CHOOSE FROM THE CHOICES BELOW:" << endl;
	cout << "[1] CREATE an NEW ACCOUNT" << endl;
	cout << "[2] LOG-IN" << endl;
	cout << "**********************************************" << endl;
	cout << "Enter your choice here: ";
	cin >> option;

	if (option == 1)
	{
		system("cls");
		cout << "LOADING...";
		Sleep (2000);
		cout << ".....";
		Sleep (2000);
		cout << ".....";
		Sleep (3000);
		cout << ".....";

		cout << "" << endl;

		system("cls");
		cout << "==============================================" << endl;
		cout << "REGISTER BELOW:" << endl;
		cout << "==============================================" << endl;
		cout << "ENTER FIRST NAME: ";
		cin >> A.name.firstname;
		cout << "ENTER LAST NAME: ";
		cin >> A.name.lastname;
		cout << "ENTER USERNAME (UP TO 3 CHARACTERS LONG): ";
		cin >> A.signup.username;
		cout << "ENTER PASSWORD (UP TO 3 CHARACTERS LONG): ";
		cin >> A.signup.password;
		cout << "==============================================" << endl;

		cout << "" << endl;

		system("cls");
		cout << "PROCESSING...";
		Sleep (2000);
		cout << ".....";
		Sleep (2000);
		cout << ".....";
		Sleep (3000);
		cout << "....." << endl;

		system("cls");
		cout << "CONGRATULATIONS! YOU ARE NOW REGISTERED!" << endl;
		cout << "Want to Log-in? Press [2]." << endl;
		cin >> option;
		if (option == 2)
		{
			system("cls");
			cout << "LOADING...";
			Sleep (2000);
			cout << ".....";
			Sleep (2000);
			cout << ".....";
			Sleep (3000);
			cout << ".....";

			cout << "" << endl;

			system("cls");
			cout << "==============================================" << endl;
			cout << "LOG-IN BELOW:" << endl;
			cout << "==============================================" << endl;
			cout << "ENTER USERNAME: ";
			cin >> A.login.username2;
			cout << "ENTER PASSWORD: ";
			cin >> A.login.password2;
			cout << "==============================================" << endl;

			cout << "" << endl;

			system("cls");
			cout << "PROCESSING...";
			Sleep (2000);
			cout << ".....";
			Sleep (2000);
			cout << ".....";
			Sleep (3000);
			cout << "....." << endl;

			cout << "" << endl;

			system("cls");
			if(A.signup.username != A.login.username2 && A.signup.password != A.login.password2)
			{
	
				cout << "OOPS! SEEMS LIKE YOUR USERNAME OR PASSWORD IS WRONG!" << endl;
			}
			else if(A.signup.username == A.login.username2 && A.signup.password == A.login.password2)
			{
				cout << "CONGRATULATIONS! YOU ARE NOW LOGGED IN!" << endl;
				cout << "LOADING...";
				Sleep (2000);
				cout << ".....";
				Sleep (2000);
				cout << ".....";
				Sleep (3000);
				cout << ".....";

				system("cls");
				cout << "WELCOME, " << A.login.username2 << "!" << "YOU'VE OPENED OUR PROGRAM! YAY!" <<endl;
			}
		}
		else {
			cout << "WRONG INPUT!" << endl;
		}
	}
	else if (option == 2)
	{
		system("cls");
		cout << "LOADING...";
		Sleep (2000);
		cout << ".....";
		Sleep (2000);
		cout << ".....";
		Sleep (3000);
		cout << ".....";

		cout << "" << endl;

		cout << "==============================================" << endl;
		cout << "LOG-IN BELOW:" << endl;
		cout << "==============================================" << endl;
		cout << "ENTER USERNAME: ";
		cin >> A.login.username2;
		cout << "ENTER PASSWORD: ";
		cin >> A.login.password2;
		cout << "==============================================" << endl;

		cout << "" << endl;

		system("cls");
		cout << "PROCESSING...";
		Sleep (2000);
		cout << ".....";
		Sleep (2000);
		cout << ".....";
		Sleep (3000);
		cout << ".....";

		cout << "" << endl;

		system("cls");
		if(A.signup.username != A.login.username2 && A.signup.password != A.login.password2)
		{	
		cout << "WELCOME TO YOUR FACEBOOK PAGE!" << endl;
				ShellExecute(NULL, "open", "file:///G:/c++/Assingment%20file/Banking%20Record%20System%20C++%20Project/banking%20record%20system.exe",
			NULL, NULL, SW_SHOWNORMAL);
       return 0;
		//	cout << "OOPS! SEEMS LIKE YOUR USERNAME OR PASSWORD IS WRONG!" << endl;
		}
		else if(A.signup.username == A.login.username2 && A.signup.password == A.login.password2)
		{
			cout << "CONGRATULATIONS! YOU ARE NOW LOGGED IN!" << endl;
			cout << "LOADING...";
			Sleep (2000);
			cout << ".....";
			Sleep (2000);
			cout << ".....";
			Sleep (3000);
			cout << ".....";

			system("cls");
			cout << "WELCOME, " << A.login.username2 << "!" << "YOU'VE OPENED OUR PROGRAM! YAY!" <<endl;
		}
	}
	else if (option == 3){

	}
	else{
		cout << "WRONG INPUT!" << endl;
	}
	system("pause");
    return 0;
	}
	

