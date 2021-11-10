#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>
#include <time.h> 

using namespace std;

int options()
{
    top:
        int select;

        cout << "\n\n\n";

        std::cout
        << "********************************\n"
        << "*     == Selection Menu ==     *\n"
        << "*                              *\n"
        << "* [1] Programs                 *\n"
        << "* [2] Settings                 *\n"
        << "* [3] Sign out                 *\n"
        << "* [4] Close                    *\n"
        << "*                              *\n"
        << "********************************\n";

        cout << "Choose an option: "; cin >> select;
        if (select == 1)
        {
            int game_select;

            cout << "\n\n\n";

            std::cout
            << "********************************\n"
            << "*      == Program Menu ==      *\n"
            << "*                              *\n"
            << "* [1] Bowl of Rice             *\n"
            << "* [2] Mad Libs                 *\n"
            << "* [3] Guessing Game            *\n"
            << "* [4] Back                     *\n"
            << "*                              *\n"
            << "********************************\n";

            cout << "\nChoose a Program: "; cin >> game_select;

            if (game_select == 1)
            {
                cout << "\n\n\n";
                cout << "  ____   ______          ___         ____  ______   _____  _____ _____ ______ " << endl;
                cout << " |  _ \\ / __ \\ \\        / / |       / __ \\|  ____| |  __ \\|_   _/ ____|  ____|" << endl;
                cout << " | |_) | |  | \\ \\  /\\  / /| |      | |  | | |__    | |__) | | || |    | |__   " << endl;
                cout << " |  _ <| |  | |\\ \\/  \\/ / | |      | |  | |  __|   |  _  /  | || |    |  __|  " << endl;
                cout << " | |_) | |__| | \\  /\\  /  | |____  | |__| | |      | | \\ \\ _| || |____| |____ " << endl;
                cout << " |____/ \\____/   \\/  \\/   |______|  \\____/|_|      |_|  \\_\\_____\\_____|______|" << endl;
                cout << "\n\n\n";
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

                cout << "\n\n\n" << endl;
                cout << "  __  __          _____    _      _____ ____   _____ " << endl;
                cout << " |  \\/  |   /\\   |  __ \\  | |    |_   _|  _ \\ / ____|" << endl;
                cout << " | \\  / |  /  \\  | |  | | | |      | | | |_) | (___" << endl;
                cout << " | |\\/| | / /\\ \\ | |  | | | |      | | |  _ < \\___ \\ " << endl;
                cout << " | |  | |/ ____ \\| |__| | | |____ _| |_| |_) |____) |" << endl;
                cout << " |_|  |_/_/    \\_\\_____/  |______|_____|____/|_____/" << endl;
                cout << "\n\n\n" << endl;

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
                int secretNum = rand() % 20 + 1;;
                int guess;
                bool win = false;
                int guesses = 1;

                cout << "\n\n\n" << endl;
                cout << "   _____ _    _ ______  _____ _____ _____ _   _  _____    _____          __  __ ______ " << endl;
                cout << "  / ____| |  | |  ____|/ ____/ ____|_   _| \\ | |/ ____|  / ____|   /\\   |  \\/  |  ____|" << endl;
                cout << " | |  __| |  | | |__  | (___| (___   | | |  \\| | |  __  | |  __   /  \\  | \\  / | |__ " << endl;
                cout << " | | |_ | |  | |  __|  \\___ \\___  \\  | | | . ` | | |_ | | | |_ | / /\\ \\ | |\\/| |  __|  " << endl;
                cout << " | |__| | |__| | |____ ____) |___) |_| |_| |\\  | |__| | | |__| |/ ____ \\| |  | | |____ " << endl;
                cout << "  \\_____|\\____/|______|_____/_____/|_____|_| \\_|\\_____|  \\_____/_/    \\_\\_|  |_|______|" << endl;
                cout << "\n\n\n" << endl;

                while(win == false)
                {
                    cout << "\n";
                    cout << "Guess a number from 1-20: "; cin >> guess;
                    if (guess == secretNum)
                    {
                        win == true;
                        break;
                    }
                    else if (guess != secretNum)
                    {
                        win == false;
                        cout << "\nYou guessed wrong. Try Again";
                        guess = guess + 1;
                    }
                }

                cout << "\nYou guessed it right! The Number was: " << secretNum << endl;
                cout << "You took " << guesses << " guess(es)" << endl;
                
                cin.ignore();
                do 
                {
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

            cout << "\n\n\n";

            std::cout
            << "********************************\n"
            << "*      == Settings Menu ==     *\n"
            << "*                              *\n"
            << "* [1] Delete Account           *\n"
            << "* [2] Back                     *\n"
            << "*                              *\n"
            << "********************************\n";
            cout << "\nChoose an option: "; cin >> Settings_Select;
            if (Settings_Select == 1)
            {
                int Confirmation;
                cout << "\n\n\n";

                std::cout
                << "********************************\n"
                << "*    == Confirmation Menu ==   *\n"
                << "*                              *\n"
                << "* [1] Confirm Account Deletion *\n"
                << "* [2] Back                     *\n"
                << "*                              *\n"
                << "********************************\n";
                cout << "\nChoose an option: "; cin >> Confirmation;
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
            cout << "Signing you out..." << endl;
            
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


bool IsLoggedIn()
{
    string username, un, pw;

    cout << endl;
    cout << "Enter Username: "; cin >> username;
    std::string password;
    char ch;
    const char ENTER = 13;

    std::cout << "Enter password: ";

    while((ch = _getch()) != ENTER)
    {
        password += ch;
        std::cout << '*';
    }
    

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

        std::cout
        << "********************************\n"
        << "*       == Login Menu ==       *\n"
        << "*                              *\n"
        << "* [1] Register                 *\n"
        << "* [2] Login                    *\n"
        << "* [3] Sign in as Guest         *\n"
        << "*                              *\n"
        << "********************************\n";
        cout << "Choose an option: "; cin >> choice;
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

            cout << "\n";

            main();
        }
        else if (choice == 2)
        {
            bool status = IsLoggedIn();

            if (!status)
            {
                cout << "False Login!" << endl;
                cout << "\n";
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
        else if (choice == 3)
        {
            cout << "\nLogged in as Guest" << endl;
             options();
             goto start;
             return 1;
        }
        else
        {
            cout << "\nYou did not select a valid option.\n";
            goto start;
        }
}