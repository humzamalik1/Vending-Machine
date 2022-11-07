#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<conio.h>

using namespace std;
void display()
{

	Sleep(500);
	cout << "W";
	Sleep(500);
	cout << "E";
	Sleep(500);
	cout << "L";
	Sleep(500);
	cout << "C";
	Sleep(500);
	cout << "O";
	Sleep(500);
	cout << "M";
	Sleep(500);
	cout << "E" << endl;
}
void processing()
{
	int i = 0;
	char load[26];
	while (i < 20)
	{
		system("cls");
		load[i++] = '#';
		load[i] = '\0';
		printf("\n\nPROCESSING [%-20s]", load);
		usleep(199900);
	}
}
string user;
string pass;

int LoginCheck(string user, string pass)
{
	ifstream file;
	string username, password;
	int n = 0;
	file.open("users.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			file >> username >> password;
			n++;
			if (user == username && pass == password)
				return n;
		}
	}
	else
	{
		cout << "file not open" << endl;
	}
	return 0;
}

int main()
{

	int drink;
	int choice;
	char option;
	int money = 0;
	int loginattempts = 0;
	ifstream userfile;
	userfile.open("users.txt");
	string userset, passset;
	if (!userfile.is_open())
	{
		cout << "file not found" << endl;
	}
	else
	{
		cout << "Hello Dear Customer." << endl;
		cout << endl;
		display();
		system("cls");
		cout << endl;

		cout << "Please Enter Your User/Password IF you are a Registered Customer OR Enter Money" << endl;
		cout << "1 - Login" << endl;
		cout << "2 - Money" << endl;
		int option;
		cin >> option;
		system("cls");
		if (option == 1)
		{
			while (LoginCheck(user, pass) == 0)
			{
				loginattempts++;
				cout << "Username: ";
				cin >> user;
				cout << "Password: ";
				cin >> pass;
				system("cls");
				if (LoginCheck(user, pass) != 0)
				{


					cout << "Welcome " << user << "." << endl;

				ask:
					cout << "Enter Money" << endl;
					cin >> money;
					do{
						cout << "########################" << endl;
						cout << " 1 - Drinks           " << endl;
						cout << " 2 - Biscuits         " << endl;
						cout << " 3 - Hot drinks       " << endl;
						cout << " 4 - Chips            " << endl;
						cout << " 5 - Chocolates       " << endl;
						cout << " 6 - Enter more money " << endl;
						cout << "########################" << endl;
						cin >> choice;
						switch (choice){
						case 1:


							cout << "Your choices of drinks are: " << endl;
							cout << "1 - Coke" << endl;
							cout << "2 - Sprite" << endl;
							cout << "3 - Water" << endl;
							cout << "4 - Orange Juice" << endl;
							cout << "5 - Apple Juice" << endl;
							cout << "What drink would you like (1/5): ";
							cin >> drink;
							cout << endl;
							system("cls");

							switch (drink)
							{
							case 1:
								processing();
								cout << endl;
								system("cls");
								if (money >= 30)
								{
									cout << "You choose Coke." << endl;
								}
								money = (money - 30);
								cout << "Your Remainig money is : " << money << "$" << endl;
								break;
							case 2:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Sprite." << endl;

								break;
							case 3:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Water." << endl;

								break;
							case 4:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Orange Juice." << endl;

								break;
							case 5:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Apple Juice." << endl;

								break;
							default:
								cout << "Error. Choice was not valid, Here is your money back.";
							}

							break;
							while (money<30);
						case 2:
							cout << "Your choices of Biscuits are: " << endl;
							cout << "1 - Lemon Biscuit" << endl;
							cout << "2 - Oreo Biscuit" << endl;
							cout << "3 - Gala Biscuit" << endl;
							cout << "4 - Party Biscuit" << endl;
							cout << "5 - Rio Biscuit" << endl;

							cout << "What drink would you like (1/5): ";
							cin >> drink;
							cout << endl;

							switch (drink)
							{
							case 1:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Lemon Biscuit." << endl;

								break;
							case 2:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Oreo Biscuit." << endl;

								break;
							case 3:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Gala Biscuit." << endl;

								break;
							case 4:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Party Biscuit." << endl;

								break;
							case 5:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Rio Biscuit." << endl;

								break;
							default:
								cout << "Error. Choice was not valid, Here is your money back.";
							}
							break;
						case 3:

							cout << "Your choices of Hot Drink are: " << endl;
							cout << "1 - Milk" << endl;
							cout << "2 - Tea" << endl;
							cout << "3 - Coffee" << endl;
							cout << "4 - Black Coffee" << endl;
							cout << "5 - Hot Chocolate" << endl;

							cout << "What Hot Drinks would you like (1/5): ";
							cin >> drink;
							cout << endl;

							switch (drink)
							{
							case 1:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Milk." << endl;

								break;
							case 2:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Tea." << endl;

								break;
							case 3:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Coffee." << endl;

								break;
							case 4:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Black Coffee." << endl;

								break;
							case 5:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Hot Chocolate." << endl;

								break;
							default:
								cout << "Error. Choice was not valid, Here is your money back.";
							}
							break;
						case 4:
							cout << "Your choices of Chips are: " << endl;
							cout << "1 - Lays" << endl;
							cout << "2 - Wavy" << endl;
							cout << "3 - Cheetos" << endl;
							cout << "4 - OyeHoy" << endl;
							cout << "5 - PopNosh" << endl;

							cout << "What kind of Chips would you like (1/5): ";
							cin >> drink;
							cout << endl;

							switch (drink)
							{
							case 1:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Lays." << endl;

								break;
							case 2:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Wavy." << endl;

								break;
							case 3:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Cheetos." << endl;

								break;
							case 4:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose OyeHoy." << endl;

								break;
							case 5:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose PopNosh." << endl;

								break;
							default:
								cout << "Error. Choice was not valid, Here is your money back.";
							}
							break;

						case 5:
							cout << "Your choices of drinks are: " << endl;
							cout << "1 - DairyMilk " << endl;
							cout << "2 - KitKat " << endl;
							cout << "3 - Paradise" << endl;
							cout << "4 - Toblerone" << endl;
							cout << "5 - DairyMilk Bubbly" << endl;


							cout << "What drink would you like (1/5): ";
							cin >> drink;
							cout << endl;

							switch (drink)
							{
							case 1:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose DairyMilk." << endl;

								break;
							case 2:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose KitKat." << endl;

							case 3:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Paradise." << endl;

								break;
							case 4:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose Toblerone." << endl;

								break;
							case 5:
								processing();
								cout << endl;
								system("cls");
								cout << "You choose DairyMilk Bubbly." << endl;

							default:
								cout << "Error. Choice was not valid, Here is your money back.";
							}
							break;
						case 6:
							cout << "Enter Money: " << endl;
							cin >> money;
							break;


						default:
							cout << "choice not valid" << endl;
						}
						cout << endl;
						cout << endl;
						cout << "*****************************************************************************" << endl;
						cout << "**Enter a/A to Display the Menu Again or press any other key to end Program**" << endl;
						cout << "*****************************************************************************" << endl;
						cin >> option;
						system("cls");


					} while (option == 'a' || 'A');
				}

				else if (loginattempts == 3)
				{
					cout << "Maximum login attempts exceeded." << endl;
					break;
				}
				else
				{
					cout << "Invalid username/password combination" << endl;
				}
			}
			userfile.close();
		}
		else if (option == 2)
		{
			goto ask;
		}
	}

	return 0;
}
