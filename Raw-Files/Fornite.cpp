#include <iostream>

using namespace std;

int main()
{
    string Audrey = "Audrey is perfect.";
    string HAU;
    char yon;
    cout << "Hello, I am Jackson. How are you? "; cin >> HAU;
    cout << "Do you want to hear a fact? (Y or N): "; cin >> yon;

    if (yon == 'n' | yon == 'N')
    {
        cout << Audrey;
    }
    else if (yon == 'Y' | yon == 'y')
    {
        cout << Audrey;
    }
    return 0;

}