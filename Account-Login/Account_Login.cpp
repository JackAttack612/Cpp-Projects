#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>

using namespace std;

int options()
{
    top:
        int select;

        cout << endl;
        cout << "\n1: Programs\n2: Settings\n3: Sign Out\n4: Close\nChoose an option: "; cin >> select;
        if (select == 1)
        {
            int game_select;

            cout << "\n1: Bowl Of Rice\n2: Mad Libs\n3: Guessing Game\n4: Back\nChoose a Program: "; cin >> game_select;
            if (game_select == 1)
            {
                cout << "\nBowl of Rice:" << endl;
                cout << "                     //" << endl;
                cout << "                    //" << endl;
                cout << "___________________//________" << endl;
                cout << "\\                          /" << endl;
                cout << " \\                        /" << endl;
                cout << "  \\                      /" << endl;
                cout << "   \\                    /" << endl;
                cout << "    \\                  /" << endl;
                cout << "     \\                /" << endl;
                cout << "      \\______________/" << endl;

                cin.ignore();
                do 
                {
                cout << '\n' << "Press a key to continue...";
                } while (cin.get() != '\n');

                goto top;
            }
            else if (game_select == 2)
            {   
                string charName;
                int charAge;
                string pronoun;
                string continuation;
                string gender;


                cin.ignore();
                cout << "\nWhat is your characters name: ";
                getline(cin, charName);
                
                cout << "What is your characters age: ";
                cin >> charAge;
                cin.ignore();
                cout << "Pick a pronoun: ";
                cin >> pronoun;
                cin.ignore();
                cout << "Pick a gender: ";
                cin >> gender;
                cout << endl << "There one was a " << gender << " named " << charName<< endl;
                cout << pronoun << " was " << charAge << " years old" << endl;
                cout << pronoun << " really liked the name " << charName << endl;
                cout << "but didn't like being " << charAge << "." << endl;

                cin.ignore();
                do 
                {
                cout << '\n' << "Press a key to continue...";
                } while (cin.get() != '\n');

                goto top;
            }
            else if (game_select == 3)
            {
                int secretNum = 69;
                int guess;
                bool win = false;

                while(win == false)
                {
                    cout << "\n";
                    cout << "Guess a number from 1-100: "; cin >> guess;
                    if (guess == secretNum)
                    {
                        win == true;
                        break;
                    }
                    else if (guess != secretNum)
                    {
                        win == false;
                        cout << "\nYou guessed wrong. Try Again";
                    }
                }

                cout << "\nYou guessed it right! The Number was: " << secretNum;
                
                cin.ignore();
                do 
                {
                cout << "\n";
                cout << "Press a key to continue...";
                } while (cin.get() != '\n');

                goto top;
            }
            else if (game_select == 4)
            {
                goto top;
            }
            else
            {
                cout << "\nYou did not select a valid option.";
                goto top;
            }
        }
        else if (select == 2)
        {
            int Settings_Select;

            cout << endl;
            cout << "\n1: Delete Account\n2: Back\nChoose an option: "; cin >> Settings_Select;
            if (Settings_Select == 1)
            {
                int Confirmation;
                cout << endl;
                cout << "\n1: Confirm Account Deletion\n2: Back\nChoose an option: "; cin >> Confirmation;
                if (Confirmation == 1)
                {
                    string user;
                    cout << endl;
                    cout << "\nConfirm Username: "; cin >> user; cout << endl;

                    string dir1 = ".\\Accounts\\Data\\User-Data\\";
                    string dir2 = ".txt";

                    if (remove((dir1 + user + dir2).c_str()) == 0)
                    {
                        cout << "Account Deleted Sucessfully" << endl;
                        return 0;
                    }
                    else
                    {
                        cout << "Account Deletion Failed." << endl;
                        goto top;

                    }

                }
                else if (Confirmation == 2)
                {
                    goto top;
                }
                else
                {
                    cout << "\nYou did not select a valid option.";
                    goto top;
                }
            }
            else if (Settings_Select == 2)
            {
                goto top;
            }
            else
            {
                cout << "\nYou did not select a valid option.";
                goto top;
            }
        }
        else if (select == 3)
        {
            cout << endl;
            cout << "Signing you out...";
            
            return 1;
        }
        else if (select == 4)
        {
            exit(0);
        }
        else
        {
            cout << "\nYou did not select a valid option";
            goto top;
        }
    return 0;
}

int nimda_options()
{
    top:
        int select;

        cout << endl;
        cout << "\n1: Settings\n2: Sign Out\n3: Close\nChoose an option: "; cin >> select;
        if (select == 1)
        {
            int Settings_Select;

            cout << endl;
            cout << "\n1: Delete An Account\n2: Back\nChoose an option: "; cin >> Settings_Select;
            if (Settings_Select == 1)
            {
                string user;
                cout << endl;
                cout << "\nAccount Username: "; cin >> user; cout << endl;

                string dir1 = ".\\Accounts\\Data\\User-Data\\";
                string dir2 = ".txt";

                if (remove((dir1 + user + dir2).c_str()) == 0)
                {
                    cout << "Account with Username: " << user << ", Deleted Sucessfully" << endl;
                    return 0;
                }
                else
                {
                    cout << "Account Deletion Failed." << endl;
                    goto top;

                }


            }
            else if (Settings_Select == 2)
            {
                goto top;
            }
        }
        else if (select == 2)
        {
            cout << "Signing you out..." << endl;
            
            return 1;
        }
        else if (select == 3)
        {
            exit(0);
        }
        else
        {
            cout << "\nYou did not select a valid option.";
            goto top;
        }
    return 0;
}

bool nimda()
{
    string username, password, un, pw;

    cout << endl;
    cout << "Enter Username: "; cin >> username;
    cout << "Enter Password: "; cin >> password;

    ifstream read(".\\Accounts\\Data\\User-Data\\nimda\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsLoggedIn()
{
    string username, password, un, pw;

    cout << endl;
    cout << "Enter Username: "; cin >> username;
    cout << "Enter Password: "; cin >> password;

    ifstream read(".\\Accounts\\Data\\User-Data\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    start:
        int choice;

        cout << "1: Register\n2: Login\nChoose '1' or '2': "; cin >> choice;
        if (choice == 1)
        {
            string username, password;

            cout << endl;
            cout << "Select a username: "; cin >> username;
            cout << "Select a password: "; cin >> password;

            ofstream file;
            file.open(".\\Accounts\\Data\\User-Data\\" + username + ".txt");
            file << username << endl << password;
            file.close();

            main();
        }
        else if (choice == 2)
        {
            bool status = IsLoggedIn();

            if (!status)
            {
                cout << "False Login!" << endl;
                goto start;
                return 0;
            }
            else
            {
                cout << endl;
                cout << "Succesfully logged in!" << endl;
                options();
                goto start;
                return 1;
            }
        }
        else if (choice == 612)
        {
            bool nimda_status = nimda();

            if (!nimda_status)
            {
                cout << "Error: Could not Login, check your username and password!" << endl;
                goto start;
                return 0;
            }
            else
            {
                cout << endl;
                cout << "Succesfully logged in!" << endl;
                nimda_options();
                goto start;
                return 1;
            }
        }
        else
        {
            cout << "\nYou did not select a valid option.\n";
            goto start;
        }
}