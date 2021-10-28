//Login or Register an Account (Using code from a video tutorial)

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <unistd.h>
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
        cout << "\n1: Settings\n2: Sign Out\n3: Close\nChoose an option: "; cin >> select;
        if (select == 1)
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

        }
}