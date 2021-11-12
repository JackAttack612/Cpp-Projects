#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>
#include <time.h> 
#include <windows.h>

using namespace std;

int options()
{
    top:

        cout << "\n\n\n";

        std::cout
        << "********************************\n"
        << "*     == Selection Menu ==     *\n"
        << "*                              *\n"
        << "* [1] Programs                 *\n"
        << "* [2] Info                     *\n"
        << "* [3] Settings                 *\n"
        << "* [4] Sign out                 *\n"
        << "* [5] Close                    *\n"
        << "*                              *\n"
        << "********************************\n";
        char select = _getch();
            if (select == '1')
            {

                cout << "\n\n\n";

                std::cout
                << "********************************\n"
                << "*      == Program Menu ==      *\n"
                << "*                              *\n"
                << "* [1] Bowl of Rice             *\n"
                << "* [2] Mad Libs                 *\n"
                << "* [3] Guessing Game            *\n"
                << "* [4] Snake (buggy)            *\n"
                << "* [5] Back                     *\n"
                << "*                              *\n"
                << "********************************\n";

                char game_select = _getch();
                    if (game_select == '1')
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
                    else if (game_select == '2')
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
                    else if (game_select == '3')
                    {
                        srand(time(0));
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
                                guesses = guesses + 1;
                            }
                        }

                        cout << "\nYou guessed it right! The Number was: " << secretNum << endl;
                        cout << "You took " << guesses << " guess(es)" << endl;
                        
                        cin.ignore();
                        do 
                        {
                        cout << "\nPress a key to continue...";
                        } while (cin.get() != '\n');

                        goto top;
                    }
                    else if (game_select == '4')
                    {
                        system("start .\\Programs\\snake-game\\snake.exe");
                        cout << "\nThe Snake game should have started in a different window!" << endl;
                        Sleep(5000);
                        goto top;
                    }
                    else if (game_select == '5')
                    {
                        goto top;
                    }
                    else
                    {
                        cout << "\nYou did not select a valid option.";
                        Sleep(3000);
                        goto top;
                    }
            }
            else if (select == '2')
            {
                cout << "\nVersion: V1.0.1" << endl;
                cout << "Changelog: https://github.com/JackAttack612/JetHub/commits/V1.0.1" << endl;
                cout << "Github Repository: https://github.com/JackAttack612/JetHub" << endl;
                cout << "Code Language: C++" << endl;

                do 
                {
                    cout << "\nPress a key to continue...";
                } while (cin.get() != '\n');

                    goto top;
                
            }
            else if (select == '3')
            {
                cout << "\n\n\n";

                std::cout
                << "********************************\n"
                << "*      == Settings Menu ==     *\n"
                << "*                              *\n"
                << "* [1] Delete Account           *\n"
                << "* [2] Back                     *\n"
                << "*                              *\n"
                << "********************************\n";
                char Settings_Select = _getch();
                    if (Settings_Select == '1')
                    {
                        cout << "\n\n\n";

                        std::cout
                        << "********************************\n"
                        << "*    == Confirmation Menu ==   *\n"
                        << "*                              *\n"
                        << "* [1] Confirm Account Deletion *\n"
                        << "* [2] Back                     *\n"
                        << "*                              *\n"
                        << "********************************\n";
                        char Confirmation = _getch();
                            if (Confirmation == 1)
                            {
                                string user;
                                cout << endl;
                                cout << "\nConfirm Username: "; cin >> user; cout << endl;

                                string dir1 = ".\\Data\\Accounts\\Data\\User-Data\\";
                                string dir2 = ".txt";

                                if (remove((dir1 + user + dir2).c_str()) == 0)
                                {
                                    cout << "Account Deleted Sucessfully" << endl;
                                    Sleep(3000);
                                    return 0;
                                }
                                else
                                {
                                    cout << "Account Deletion Failed." << endl;
                                    Sleep(3000);
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
                                Sleep(3000);
                                goto top;
                            }
                    }
                    else if (Settings_Select == '2')
                    {
                        goto top;
                    }
                    else
                    {
                        cout << "\nYou did not select a valid option.";
                        Sleep(3000);
                        goto top;
                    }
            }
            else if (select == '4')
            {
                cout << endl;
                cout << "Signing you out..." << endl;
                
                return 1;
            }
            else if (select == '5')
            {
                exit(0);
            }
            else
            {
                cout << "\nYou did not select a valid option";
                Sleep(3000);
                goto top;
            }
        return 0;
}


bool IsLoggedIn()
{
    string username, un, pw;

    cout << endl;
    cout << "Enter Username: "; cin >> username;
    if (FILE *file = fopen((".\\Data\\Accounts\\Data\\User-Data\\" + username + ".txt").c_str(), "r")) 
    {
        fclose(file);
        std::string password;
        int count=0,ch;
        char yn;

        cout << "Show Password (Y/N): "; cin >> yn;

        if (yn == 'n' | yn == 'N')
        {
            std::cout << "Enter password: ";

            while(ch=getch())
            { 
                if(ch == 13)
                {
                    break;
                }
                else if(ch==8)
                {
                    if(password.length()>0)
                    {
                        cout<<"\b \b";
                        password.erase(password.length()-1);
                    }
                }
                else
                {
                    cout<<"*";
                    password += ch;
                }
            }
        }
        else if (yn == 'y' | yn == 'Y')
        {
            cout << "Enter password: "; cin >> password;
        }
        else
        {
            cout << "You did not select a valid option. Your Password will be hidden." << endl;
            std::cout << "Enter password: ";

            while(ch=getch())
            { 
                if(ch == 13)
                {
                    break;
                }
                else if(ch==8)
                {
                    if(password.length()>0)
                    {
                        cout<<"\b \b";
                        password.erase(password.length()-1);
                    }
                }
                else
                {
                    cout<<"*";
                    password += ch;
                }
            }
        }
        ifstream read(".\\Data\\Accounts\\Data\\User-Data\\" + username + ".txt");
        getline(read, un);
        getline(read, pw);

        if (un == username && pw == password)
        {
            return true;
        }
        else
        {
            cout << "\nError: Password Incorrect" << endl;
            Sleep(3000);
            return false;
        }
    }
    else 
    {
        cout << "Error: Username Does not Exist" << endl;
        Sleep(3000);
        return false;
    }   
}
    
int main()
{
    start:

        std::cout
        << "********************************\n"
        << "*       == Login Menu ==       *\n"
        << "*                              *\n"
        << "* [1] Register                 *\n"
        << "* [2] Login                    *\n"
        << "* [3] Sign in as Guest         *\n"
        << "*                              *\n"
        << "********************************\n";
        char choice = _getch();
            
            if (choice == '1')
            {
                string username, password;

                cout << endl;
                cout << "Select a username: "; cin >> username;
                cout << "Select a password: "; cin >> password;

                ofstream file;
                file.open(".\\Data\\Accounts\\Data\\User-Data\\" + username + ".txt");
                file << username << endl << password;
                file.close();

                cout << "\n";

                main();
            }
            else if (choice == '2')
            {
                bool status = IsLoggedIn();

                if (!status)
                {
                    cout << "\n";
                    goto start;
                    return 0;
                }
                else
                {
                    cout << endl;
                    cout << "Succesfully logged in!" << endl;
                    Sleep(2000);
                    options();
                    goto start;
                    return 1;
                }
            }
            else if (choice == '3')
            {
                cout << "\nLogging in as Guest" << endl;
                Sleep(2000);
                options();
                goto start;
                return 1;
            }
            else
            {
                cout << "\nYou did not select a valid option.\n";
                Sleep(3000);
                goto start;
            }
    }