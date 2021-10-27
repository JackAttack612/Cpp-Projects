//Login or Register an Account (Using code from a video tutorial)

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int options()
{
    top:
        int select;

        cout << "1: Settings\n2: Sign Out\n3: Close"; cin >> select;
        if (select == 1)
        {
            int Settings_Select;

            cout << "1: Delete Account\n2: Back"; cin >> Settings_Select;
            if (Settings_Select == 1)
            {
                int Confirmation;
                cout << "1: Confirm Account Deletion\n2: Back"; cin >> Confirmation;
                if (Confirmation == 1)
                {
                        string username, password, un, pw;

                        cout << "Enter Username: "; cin >> username;
                        cout << "Enter Password: "; cin >> password;

                        ifstream read(".\\Accounts\\" + username + ".txt");
                        getline(read, un);
                        getline(read, pw);

                        if (un == username && pw == password)
                        {
                            char filename = ".\\Accounts\\" + username + ".txt";
                            remove(filename);
                            cout << "Account Sucessfully Deleted!" << endl;
                            return 1;
                        }
                        else
                        {
                            cout << "Login Failed. Account not Deleted";
                            return 0;
                        }

                }
                else if (Confirmation == 2)
                {
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
            exit()
        }
}


bool IsLoggedIn()
{
    string username, password, un, pw;

    cout << "Enter Username: "; cin >> username;
    cout << "Enter Password: "; cin >> password;

    ifstream read(".\\Accounts\\" + username + ".txt");
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

            cout << "Select a username: "; cin >> username;
            cout << "Select a password: "; cin >> password;

            ofstream file;
            file.open(".\\Accounts\\" + username + ".txt");
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
                cout << "Succesfully logged in!" << endl;
                options();
                goto start;
                return 1;
            }
        }
}